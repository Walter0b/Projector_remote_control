#include "server.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationDisplayName(Server::tr("NEC VideoProjector Emulator"));
    Server w;
    w.resize(QSize(500, 50));
    w.show();
    return a.exec();
}
