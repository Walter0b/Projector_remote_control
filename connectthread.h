#ifndef CONNECTTHREAD_H
#define CONNECTTHREAD_H

#include <QThread>
#include <QTcpSocket>

class ConnectThread : public QThread
{
    Q_OBJECT
public:
    explicit ConnectThread(QObject *parent = nullptr);
    explicit ConnectThread(QObject *parent = nullptr, bool is_connected_1 = false, bool is_connected_2 = false,
                           QString host_1 = "", QString host_2 = "");
    void run();
    ~ConnectThread();

public:
    QString host_1;
    QString host_2;
    bool is_connected_1;
    bool is_connected_2;
    bool kill;

signals:
    void connexionStatusChanged_1();
    void connexionStatusChanged_2();

};

#endif // CONNECTTHREAD_H
