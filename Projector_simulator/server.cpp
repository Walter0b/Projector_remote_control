#include "server.h"
#include <QtWidgets>
#include <QtNetwork>
#include <QtCore>
#include <QTextStream>

Server::Server(QWidget *parent)
    : QDialog(parent),
      statusLabel(new QLabel)

{
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    statusLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);

    command = "";
    ipAddress = "";

    tcpServer = new QTcpServer(this);
    if (!tcpServer->listen()) {
        QMessageBox::critical(this, tr("NEC Server"),
                              tr("Unable to start the server: %1.")
                              .arg(tcpServer->errorString()));
        close();
        return;
    }

    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // use the first non-localhost IPv4 address
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        //        out << ipAddressesList.at(i).toString() << Qt::endl;
        if (ipAddressesList.at(i) != QHostAddress::LocalHost &&
                ipAddressesList.at(i).toIPv4Address()) {
            ipAddress = ipAddressesList.at(i).toString();
            break;
        }
    }
    tcpServer->close();
    tcpServer->listen(QHostAddress(ipAddress), 7142);
    // if we did not find one, use IPv4 localhost
    if (ipAddress.isEmpty())
        ipAddress = QHostAddress(QHostAddress::LocalHost).toString();

    statusLabel->setText(tr("The server is running on\n\nIP: %1\nport: %2\n\n"
                            "Received Command : %3 ").arg(ipAddress).arg(tcpServer->serverPort()).arg(command));


    auto quitButton = new QPushButton(tr("Quit"));
    quitButton->setAutoDefault(false);
    connect(quitButton, &QAbstractButton::clicked, this, &QWidget::close);
    connect(tcpServer, &QTcpServer::newConnection, this, &Server::newConnection);

    auto buttonLayout = new QHBoxLayout;
    buttonLayout->addStretch(1);
    buttonLayout->addWidget(quitButton);
    buttonLayout->addStretch(1);

    QVBoxLayout *mainLayout = nullptr;
    if (QGuiApplication::styleHints()->showIsFullScreen() || QGuiApplication::styleHints()->showIsMaximized()) {
        auto outerVerticalLayout = new QVBoxLayout(this);
        outerVerticalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::MinimumExpanding));
        auto outerHorizontalLayout = new QHBoxLayout;
        outerHorizontalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Ignored));
        auto groupBox = new QGroupBox(QGuiApplication::applicationDisplayName());
        mainLayout = new QVBoxLayout(groupBox);
        outerHorizontalLayout->addWidget(groupBox);
        outerHorizontalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Ignored));
        outerVerticalLayout->addLayout(outerHorizontalLayout);
        outerVerticalLayout->addItem(new QSpacerItem(0, 0, QSizePolicy::Ignored, QSizePolicy::MinimumExpanding));
    } else {
        mainLayout = new QVBoxLayout(this);
    }

    mainLayout->addWidget(statusLabel);
    mainLayout->addLayout(buttonLayout);

    setWindowTitle(QGuiApplication::applicationDisplayName());
}

void Server::readData(QTcpSocket *socket)
{

//    QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());
    QByteArray buffer;
    QDataStream socketStream(socket);
    socketStream.setVersion(QDataStream::Qt_6_4);

    socketStream.startTransaction();
    socketStream >> buffer;

    if(!socketStream.commitTransaction())
    {
        QMessageBox::critical(this, tr("NEC Server"), tr("Unable to get Data"));
        return;
    }
    command = QString::fromStdString(buffer.toStdString());
    statusLabel->setText(tr("The server is running on\n\nIP: %1\nport: %2\n\n"
                            "Received Command : %3 ").arg(ipAddress).arg(tcpServer->serverPort()).arg(command));

}

void Server::newConnection(){
    QTcpSocket *clientConnection = tcpServer->nextPendingConnection();

    if(clientConnection)
    {
        if(clientConnection->isOpen()){
            connect(clientConnection, &QTcpSocket::readyRead, this, [=](){
                               readData(reinterpret_cast<QTcpSocket*>(sender()));
                           });
            connect(clientConnection, &QAbstractSocket::disconnected, clientConnection, &QObject::deleteLater);
        }
    }
}

Server::~Server()
{
}



