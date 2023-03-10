#ifndef SERVER_H
#define SERVER_H

#include <QDialog>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
class QLabel;
class QTcpServer;
QT_END_NAMESPACE

class Server : public QDialog
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();

private slots:
    void readData(QTcpSocket*);
    void newConnection();

private:

    QLabel *statusLabel = nullptr;
    QTcpServer *tcpServer = nullptr;
    QString command;
    QString ipAddress;
    int port;

};

#endif // SERVER_H
