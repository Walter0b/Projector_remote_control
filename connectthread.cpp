#include "connectthread.h"
#include <QMutex>

ConnectThread::ConnectThread(QObject *parent)
    : QThread{parent}
{

}

ConnectThread::ConnectThread(QObject *parent, bool _is_connected_1, bool _is_connected_2, QString _host_1, QString _host_2)
    : QThread{parent}
{
    this->host_1 = _host_1;
    this->host_2 = _host_2;
    this->is_connected_1 = _is_connected_1;
    this->is_connected_2 = _is_connected_2;
}

void ConnectThread::run()
{
    QTcpSocket *socket_1 = new QTcpSocket();
    QTcpSocket *socket_2 = new QTcpSocket();
    QMutex mutex_1;
    QMutex mutex_2;
    kill = false;

    while (!kill) {
        mutex_1.lock();
        if(!is_connected_1){
            socket_1->deleteLater();
            socket_1 = new QTcpSocket();
            socket_1->connectToHost(host_1, 7142);
            if(socket_1->waitForConnected()){
                is_connected_1 = true;
                emit connexionStatusChanged_1();
            }
        }
        mutex_1.unlock();

        mutex_2.lock();
        if(!is_connected_2){
            socket_2->deleteLater();
            socket_2 = new QTcpSocket();
            socket_2->connectToHost(host_2, 7142);
            if(socket_2->waitForConnected()){
                is_connected_2 = true;
                emit connexionStatusChanged_2();
            }
        }
        mutex_2.unlock();

        msleep(100);
    }
    delete socket_2;
    delete socket_1;

}


ConnectThread::~ConnectThread()
{
    quit();
#if QT_VERSION >= QT_VERSION_CHECK(5,2,0)
    requestInterruption();
#endif
    wait();
}
