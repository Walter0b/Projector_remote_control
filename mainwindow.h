#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "connectthread.h"
#include "qpushbutton.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMainWindow>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include "styles.h"
#include <QFile>
#include <QSlider>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int Buttons = 0;

private slots:
    void connected_1();
    void disconnected_1();
    void on_startButton_clicked();
    void on_Admin_button_clicked();
    void on_Sleep_Button_clicked();
    void on_pushButton_clicked();
    void on_pushButton_13_clicked();
    void on_password_lineEdit_cursorPositionChanged();
    void on_P1_On_Button_clicked();
    void on_P2_On_Button_clicked();
    void on_Admin_next_button_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton *Active_btn;
    QPushButton *Active_btn2;
    QTcpSocket *tcpSocket_1 = nullptr;
    QTcpSocket *tcpSocket_2 = nullptr;
    QDataStream socketStream_1;
    QDataStream socketStream_2;
    QString active_commandData;
    QString host_1;
    QString host_2;
    ConnectThread *connectThread = nullptr;
    QByteArray byteArray;
    int password = 500000;
    Styles *custom_style = new Styles;
    QVector<QPushButton *>::Iterator viterator;
    QVector<QPushButton *> AllBtn;
    bool is_connected_1;
    bool is_connected_2;
    bool powerState_1;
    bool powerState_2;
    // Functions
    void changeColorInActive(QPushButton *, QString);
    void changeBrightness(int);
    void BtnControl(QPushButton *, QPushButton *);
    void command(int, QString, QPushButton *);
    void onOff(int, QPushButton *);
    void connected_2();
    void disconnected_2();
    void onConnexionStatusChanged_1();
    void onConnexionStatusChanged_2();
};
#endif // MAINWINDOW_H
