#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qpushbutton.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMainWindow>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include "styles.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int Buttons = 0;

private slots:

   void on_startButton_clicked();

    void on_Admin_button_clicked();

    void on_Sleep_Button_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_clicked();

    void on_pushButton_13_clicked();

    void on_password_lineEdit_cursorPositionChanged();

private:
    Ui::MainWindow *ui;
    QLabel *btn_label = new QLabel("");
    QPushButton *Active_btn;
    QLabel *btn_label2 = new QLabel("");
    QPushButton *Active_btn2;
    QString active_commandData;
    int password = 500000;
    Styles* custom_style = new Styles;
    //QPushButton *Disable_btn;
    void changeColorInActive(QPushButton*, QLabel*, int);
        void changeColorInActive2(QPushButton*, QLabel*);
     void BtnControl(QPushButton*, QLabel*, QLabel*);
    QVector<QPushButton*> ::Iterator viterator;
    QVector <QPushButton*> AllBtn= {
        ui->P1_HDMI_Button_1,
        ui->P1_HDBaseT,
        ui->P1_SDI_1,
        ui->P1_SDI_2,
        ui->P1_SDI_3,
        ui->P1_SDI_4
    };
    //Button click command
    void command(int);
    void animationStackedWidgets();
    void whenAnimationFinish();
};
#endif // MAINWINDOW_H
