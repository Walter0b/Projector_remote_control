/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QPushButton *startButton;
    QWidget *page_2;
    QFrame *frame_4;
    QFrame *line;
    QPushButton *P1_HDMI_Button_1;
    QLabel *label_3;
    QFrame *line_3;
    QLabel *label_11;
    QPushButton *P1_DisplayPort_1;
    QLabel *label_13;
    QLabel *label_15;
    QPushButton *P1_HDBaseT;
    QLabel *label_16;
    QPushButton *P1_SDI_1;
    QPushButton *P1_On_Button;
    QPushButton *P1_DisplayPort_2;
    QLabel *label_14;
    QLabel *label;
    QLabel *label_17;
    QPushButton *P1_SDI_2;
    QPushButton *P1_SDI_3;
    QLabel *label_18;
    QPushButton *P1_SDI_4;
    QLabel *label_19;
    QLabel *label_12;
    QPushButton *P1_HDMI_Button_2;
    QLabel *lbl_is_connected_1;
    QLabel *lbl_brightness_1_val_1;
    QSlider *sl_brightness_1;
    QPushButton *Admin_button;
    QPushButton *Sleep_Button;
    QFrame *frame_5;
    QFrame *line_2;
    QPushButton *P2_HDMI_Button_1;
    QLabel *label_4;
    QFrame *line_4;
    QLabel *label_20;
    QPushButton *P2_DisplayPort_1;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *P2_HDBaseT;
    QLabel *label_23;
    QPushButton *P2_SDI_1;
    QPushButton *P2_On_Button;
    QPushButton *P2_DisplayPort_2;
    QLabel *label_24;
    QLabel *label_2;
    QLabel *label_25;
    QPushButton *P2_SDI_2;
    QPushButton *P2_SDI_3;
    QLabel *label_26;
    QPushButton *P2_SDI_4;
    QLabel *label_27;
    QLabel *label_28;
    QPushButton *P2_HDMI_Button_2;
    QLabel *lbl_is_connected_2;
    QLabel *lbl_brightness_1_val_2;
    QSlider *sl_brightness_2;
    QWidget *page_3;
    QFrame *frame_3;
    QPushButton *pushButton_13;
    QLineEdit *password_lineEdit;
    QPushButton *Admin_next_button;
    QLabel *incorrect_password;
    QWidget *page_4;
    QFrame *frame_7;
    QFrame *line_7;
    QPushButton *P2_Admin_HDMI_Button_1;
    QFrame *line_8;
    QLabel *label_38;
    QPushButton *P2_Admin_HDMI_Button_2;
    QLabel *label_39;
    QPushButton *P2_Admin_DisplayPort_1;
    QLabel *label_40;
    QLabel *label_41;
    QPushButton *P2_Admin_HDBaseT;
    QLabel *label_42;
    QPushButton *P2_Admin_SDI_1;
    QPushButton *P2_Admin_DisplayPort_2;
    QLabel *label_43;
    QLabel *label_8;
    QLabel *label_44;
    QPushButton *P2_Admin_SDI_2;
    QPushButton *P2_Admin_SDI_3;
    QLabel *label_45;
    QPushButton *P2_Admin_SDI_4;
    QLabel *label_46;
    QLabel *P2_Admin_HDMI_label_2;
    QLabel *label_10;
    QFrame *frame_6;
    QFrame *line_5;
    QPushButton *P1_Admin_HDMI_Button_1;
    QFrame *line_6;
    QLabel *P1_Admin_HDMI_Text_1;
    QPushButton *P1_Admin_DisplayPort_1;
    QLabel *label_30;
    QLabel *label_31;
    QPushButton *P1_Admin_HDBaseT;
    QLabel *label_32;
    QPushButton *P1_Admin_SDI_1;
    QPushButton *P1_Admin_DisplayPort_2;
    QLabel *label_33;
    QLabel *label_6;
    QLabel *label_34;
    QPushButton *P1_Admin_SDI_2;
    QPushButton *P1_Admin_SDI_3;
    QLabel *label_35;
    QPushButton *P1_Admin_SDI_4;
    QLabel *label_36;
    QLabel *label_37;
    QPushButton *P1_Admin_HDMI_Button_2;
    QLabel *label_9;
    QFrame *frame_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(731, 511);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QMainWindow \n"
"#P1_Admin_HDMI_Button_1,\n"
"#P1_Admin_HDMI_Button_2,\n"
"#P2_Admin_HDMI_Button_1,\n"
"#P2_Admin_HDMI_Button_2,\n"
"#P1_HDMI_Button_1, \n"
"#P1_HDMI_Button_2, \n"
"#P2_HDMI_Button_1, \n"
"#P2_HDMI_Button_2 {\n"
"       border-image: url(:HDMI.png);\n"
"       max-height: 50px;   \n"
"       min-height:61;\n"
"       min-width:81;\n"
"       border-radius: 8%;\n"
"       border: none;\n"
"}\n"
"\n"
"QMainWindow \n"
"#P1_Admin_DisplayPort_2,\n"
"#P1_Admin_DisplayPort_1,\n"
"#P2_Admin_DisplayPort_2,\n"
"#P2_Admin_DisplayPort_1,\n"
"#P1_DisplayPort_1, \n"
"#P1_DisplayPort_2, \n"
"#P2_DisplayPort_1, \n"
"#P2_DisplayPort_2 {\n"
"border-image: url(:DisplayPort.png);\n"
"       max-height: 50px;   \n"
"       min-height:61;\n"
"       min-width:81;\n"
"       border-radius: 8%;\n"
"       border: none;\n"
"}\n"
"\n"
"QMainWindow \n"
"#P1_Admin_SDI_1, \n"
"#P1_Admin_SDI_2, \n"
"#P1_Admin_SDI_3, \n"
"#P1_Admin_SDI_4,\n"
"#P2_Admin_SDI_1, \n"
"#P2_Admin_SDI_2, \n"
"#P2_Admin_SDI_3, \n"
"#P2_Adm"
                        "in_SDI_4,\n"
"#P1_SDI_1, \n"
"#P1_SDI_2, \n"
"#P1_SDI_3, \n"
"#P1_SDI_4,\n"
"#P2_SDI_1, \n"
"#P2_SDI_2, \n"
"#P2_SDI_3, \n"
"#P2_SDI_4{\n"
"border-image: url(:SDI.svg);\n"
"max-height: 50px;   \n"
"min-height:61;\n"
"min-width:81;\n"
"border-radius: 8%;\n"
"border: none;\n"
"}\n"
"\n"
"\n"
"QMainWindow #P1_Admin_HDBaseT, #P2_Admin_HDBaseT, #P1_HDBaseT, #P2_HDBaseT{\n"
"border-image: url(:HDBaseT.png);\n"
"max-height: 50px;   \n"
"min-height:61;\n"
"min-width:81;\n"
"border-radius: 8%;\n"
"border: none;\n"
"}\n"
"\n"
"\n"
""));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-10, 0, 741, 511));
        stackedWidget->setMinimumSize(QSize(741, 0));
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: #101010;"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 0, 731, 511));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        startButton = new QPushButton(frame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(270, 150, 191, 191));
        startButton->setCursor(QCursor(Qt::PointingHandCursor));
        startButton->setStyleSheet(QString::fromUtf8("background-color: transparent; \n"
"border: 1px solid black; \n"
"border-radius: 50%;\n"
"border-image: url(:power-btn.png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"\n"
"\n"
"\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        frame_4 = new QFrame(page_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(20, 50, 351, 421));
        frame_4->setMinimumSize(QSize(351, 0));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 26, 26);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        line = new QFrame(frame_4);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(19, 105, 311, 16));
        line->setMinimumSize(QSize(311, 0));
        line->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid white"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        P1_HDMI_Button_1 = new QPushButton(frame_4);
        P1_HDMI_Button_1->setObjectName(QString::fromUtf8("P1_HDMI_Button_1"));
        P1_HDMI_Button_1->setGeometry(QRect(35, 140, 81, 61));
        P1_HDMI_Button_1->setMinimumSize(QSize(81, 61));
        P1_HDMI_Button_1->setCursor(QCursor(Qt::PointingHandCursor));
        P1_HDMI_Button_1->setStyleSheet(QString::fromUtf8("max-height: 50px;\n"
"min-height:61;\n"
"min-width:81;\n"
"background-color:rgb(46, 194, 126);\n"
"border-radius: 8%;\n"
"border: none;\n"
"background-repeat: none;\n"
"color:black;\n"
"text-align: center;\n"
"right: 500px;"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(17, 376, 81, 31));
        label_3->setMinimumSize(QSize(81, 0));
        label_3->setStyleSheet(QString::fromUtf8("color:#fff;"));
        line_3 = new QFrame(frame_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(19, 350, 311, 16));
        line_3->setMinimumSize(QSize(311, 0));
        line_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid white;"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(55, 180, 41, 21));
        label_11->setMinimumSize(QSize(41, 0));
        label_11->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        P1_DisplayPort_1 = new QPushButton(frame_4);
        P1_DisplayPort_1->setObjectName(QString::fromUtf8("P1_DisplayPort_1"));
        P1_DisplayPort_1->setGeometry(QRect(235, 140, 81, 61));
        P1_DisplayPort_1->setMinimumSize(QSize(81, 61));
        P1_DisplayPort_1->setCursor(QCursor(Qt::PointingHandCursor));
        P1_DisplayPort_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_13 = new QLabel(frame_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(235, 180, 81, 21));
        label_13->setMinimumSize(QSize(41, 0));
        label_13->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(135, 250, 81, 21));
        label_15->setMinimumSize(QSize(41, 0));
        label_15->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:6px;\n"
"text-align:center;"));
        P1_HDBaseT = new QPushButton(frame_4);
        P1_HDBaseT->setObjectName(QString::fromUtf8("P1_HDBaseT"));
        P1_HDBaseT->setGeometry(QRect(135, 210, 81, 61));
        P1_HDBaseT->setMinimumSize(QSize(81, 61));
        P1_HDBaseT->setCursor(QCursor(Qt::PointingHandCursor));
        P1_HDBaseT->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_16 = new QLabel(frame_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(255, 250, 41, 21));
        label_16->setMinimumSize(QSize(41, 0));
        label_16->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:5px;\n"
"text-align:center;"));
        P1_SDI_1 = new QPushButton(frame_4);
        P1_SDI_1->setObjectName(QString::fromUtf8("P1_SDI_1"));
        P1_SDI_1->setGeometry(QRect(235, 210, 81, 61));
        P1_SDI_1->setMinimumSize(QSize(81, 61));
        P1_SDI_1->setCursor(QCursor(Qt::PointingHandCursor));
        P1_SDI_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        P1_On_Button = new QPushButton(frame_4);
        P1_On_Button->setObjectName(QString::fromUtf8("P1_On_Button"));
        P1_On_Button->setGeometry(QRect(37, 30, 70, 70));
        P1_On_Button->setMinimumSize(QSize(70, 0));
        P1_On_Button->setCursor(QCursor(Qt::PointingHandCursor));
        P1_On_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/On.png);\n"
"max-height: 70px;\n"
"max-width: 70px;\n"
"background-color: green;\n"
"border-radius:35px;\n"
"color :black;\n"
"font-weight:bold;\n"
"border: none;\n"
"background-repeat: none;"));
        P1_DisplayPort_2 = new QPushButton(frame_4);
        P1_DisplayPort_2->setObjectName(QString::fromUtf8("P1_DisplayPort_2"));
        P1_DisplayPort_2->setGeometry(QRect(35, 210, 81, 61));
        P1_DisplayPort_2->setMinimumSize(QSize(81, 61));
        P1_DisplayPort_2->setCursor(QCursor(Qt::PointingHandCursor));
        P1_DisplayPort_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_14 = new QLabel(frame_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(35, 250, 81, 21));
        label_14->setMinimumSize(QSize(41, 0));
        label_14->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:2px;\n"
"font-size: 13px;\n"
"text-align:center;"));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 111, 31));
        label->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font: 23px ;\n"
"color: white;"));
        label_17 = new QLabel(frame_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(55, 320, 41, 21));
        label_17->setMinimumSize(QSize(41, 0));
        label_17->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P1_SDI_2 = new QPushButton(frame_4);
        P1_SDI_2->setObjectName(QString::fromUtf8("P1_SDI_2"));
        P1_SDI_2->setGeometry(QRect(35, 280, 81, 61));
        P1_SDI_2->setMinimumSize(QSize(81, 61));
        P1_SDI_2->setCursor(QCursor(Qt::PointingHandCursor));
        P1_SDI_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        P1_SDI_3 = new QPushButton(frame_4);
        P1_SDI_3->setObjectName(QString::fromUtf8("P1_SDI_3"));
        P1_SDI_3->setGeometry(QRect(135, 280, 81, 61));
        P1_SDI_3->setMinimumSize(QSize(81, 61));
        P1_SDI_3->setCursor(QCursor(Qt::PointingHandCursor));
        P1_SDI_3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_18 = new QLabel(frame_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(155, 320, 41, 21));
        label_18->setMinimumSize(QSize(41, 0));
        label_18->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P1_SDI_4 = new QPushButton(frame_4);
        P1_SDI_4->setObjectName(QString::fromUtf8("P1_SDI_4"));
        P1_SDI_4->setGeometry(QRect(235, 280, 81, 61));
        P1_SDI_4->setMinimumSize(QSize(81, 61));
        P1_SDI_4->setCursor(QCursor(Qt::PointingHandCursor));
        P1_SDI_4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(255, 320, 41, 21));
        label_19->setMinimumSize(QSize(41, 0));
        label_19->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:5px;\n"
"text-align:center;"));
        label_12 = new QLabel(frame_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(155, 180, 41, 21));
        label_12->setMinimumSize(QSize(41, 0));
        label_12->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        P1_HDMI_Button_2 = new QPushButton(frame_4);
        P1_HDMI_Button_2->setObjectName(QString::fromUtf8("P1_HDMI_Button_2"));
        P1_HDMI_Button_2->setGeometry(QRect(135, 140, 81, 61));
        P1_HDMI_Button_2->setMinimumSize(QSize(81, 61));
        P1_HDMI_Button_2->setCursor(QCursor(Qt::PointingHandCursor));
        P1_HDMI_Button_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        lbl_is_connected_1 = new QLabel(frame_4);
        lbl_is_connected_1->setObjectName(QString::fromUtf8("lbl_is_connected_1"));
        lbl_is_connected_1->setGeometry(QRect(143, 80, 121, 18));
        lbl_is_connected_1->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"content: 'Status';"));
        lbl_brightness_1_val_1 = new QLabel(frame_4);
        lbl_brightness_1_val_1->setObjectName(QString::fromUtf8("lbl_brightness_1_val_1"));
        lbl_brightness_1_val_1->setGeometry(QRect(291, 382, 41, 21));
        lbl_brightness_1_val_1->setStyleSheet(QString::fromUtf8("color: white;"));
        sl_brightness_1 = new QSlider(frame_4);
        sl_brightness_1->setObjectName(QString::fromUtf8("sl_brightness_1"));
        sl_brightness_1->setGeometry(QRect(100, 390, 160, 16));
        sl_brightness_1->setStyleSheet(QString::fromUtf8(""));
        sl_brightness_1->setOrientation(Qt::Horizontal);
        line->raise();
        line_3->raise();
        label->raise();
        P1_SDI_1->raise();
        P1_SDI_4->raise();
        P1_DisplayPort_1->raise();
        P1_HDMI_Button_2->raise();
        P1_HDMI_Button_1->raise();
        P1_HDBaseT->raise();
        P1_SDI_2->raise();
        P1_On_Button->raise();
        P1_SDI_3->raise();
        P1_DisplayPort_2->raise();
        lbl_is_connected_1->raise();
        lbl_brightness_1_val_1->raise();
        label_16->raise();
        label_13->raise();
        label_11->raise();
        label_17->raise();
        label_14->raise();
        label_18->raise();
        label_19->raise();
        label_15->raise();
        label_12->raise();
        label_3->raise();
        sl_brightness_1->raise();
        Admin_button = new QPushButton(page_2);
        Admin_button->setObjectName(QString::fromUtf8("Admin_button"));
        Admin_button->setGeometry(QRect(543, 10, 87, 31));
        Admin_button->setCursor(QCursor(Qt::PointingHandCursor));
        Admin_button->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border: none;\n"
"border-radius: 3px;\n"
"color: #fff;"));
        Sleep_Button = new QPushButton(page_2);
        Sleep_Button->setObjectName(QString::fromUtf8("Sleep_Button"));
        Sleep_Button->setGeometry(QRect(643, 10, 87, 31));
        Sleep_Button->setCursor(QCursor(Qt::PointingHandCursor));
        Sleep_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border: none;\n"
"border-radius: 3px;\n"
"color: #fff;"));
        frame_5 = new QFrame(page_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(380, 50, 351, 421));
        frame_5->setMinimumSize(QSize(351, 0));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 26, 26);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        line_2 = new QFrame(frame_5);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 106, 311, 16));
        line_2->setMinimumSize(QSize(311, 0));
        line_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid white;"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        P2_HDMI_Button_1 = new QPushButton(frame_5);
        P2_HDMI_Button_1->setObjectName(QString::fromUtf8("P2_HDMI_Button_1"));
        P2_HDMI_Button_1->setGeometry(QRect(35, 140, 81, 61));
        P2_HDMI_Button_1->setMinimumSize(QSize(81, 61));
        P2_HDMI_Button_1->setCursor(QCursor(Qt::PointingHandCursor));
        P2_HDMI_Button_1->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 194, 126);"));
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 377, 81, 31));
        label_4->setMinimumSize(QSize(81, 0));
        label_4->setStyleSheet(QString::fromUtf8("color:#fff;"));
        line_4 = new QFrame(frame_5);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 350, 311, 16));
        line_4->setMinimumSize(QSize(311, 0));
        line_4->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid white;"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_20 = new QLabel(frame_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(55, 180, 41, 21));
        label_20->setMinimumSize(QSize(41, 0));
        label_20->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        P2_DisplayPort_1 = new QPushButton(frame_5);
        P2_DisplayPort_1->setObjectName(QString::fromUtf8("P2_DisplayPort_1"));
        P2_DisplayPort_1->setGeometry(QRect(235, 140, 81, 61));
        P2_DisplayPort_1->setMinimumSize(QSize(81, 61));
        P2_DisplayPort_1->setCursor(QCursor(Qt::PointingHandCursor));
        P2_DisplayPort_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_21 = new QLabel(frame_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(235, 180, 81, 21));
        label_21->setMinimumSize(QSize(41, 0));
        label_21->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        label_22 = new QLabel(frame_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(135, 250, 81, 21));
        label_22->setMinimumSize(QSize(41, 0));
        label_22->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:6px;\n"
"text-align:center;"));
        P2_HDBaseT = new QPushButton(frame_5);
        P2_HDBaseT->setObjectName(QString::fromUtf8("P2_HDBaseT"));
        P2_HDBaseT->setGeometry(QRect(135, 210, 81, 61));
        P2_HDBaseT->setMinimumSize(QSize(81, 61));
        P2_HDBaseT->setCursor(QCursor(Qt::PointingHandCursor));
        P2_HDBaseT->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_23 = new QLabel(frame_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(255, 250, 41, 21));
        label_23->setMinimumSize(QSize(41, 0));
        label_23->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:5px;\n"
"text-align:center;"));
        P2_SDI_1 = new QPushButton(frame_5);
        P2_SDI_1->setObjectName(QString::fromUtf8("P2_SDI_1"));
        P2_SDI_1->setGeometry(QRect(235, 210, 81, 61));
        P2_SDI_1->setMinimumSize(QSize(81, 61));
        P2_SDI_1->setCursor(QCursor(Qt::PointingHandCursor));
        P2_SDI_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        P2_On_Button = new QPushButton(frame_5);
        P2_On_Button->setObjectName(QString::fromUtf8("P2_On_Button"));
        P2_On_Button->setGeometry(QRect(35, 32, 70, 70));
        P2_On_Button->setMinimumSize(QSize(70, 0));
        P2_On_Button->setCursor(QCursor(Qt::PointingHandCursor));
        P2_On_Button->setStyleSheet(QString::fromUtf8("border-image: url(:/On.png);\n"
"max-height: 70px;\n"
"max-width: 70px;\n"
"background-color: green;\n"
"border-radius:35px;\n"
"color :black;\n"
"font-weight:bold;\n"
"border: none;\n"
"background-repeat: none;"));
        P2_DisplayPort_2 = new QPushButton(frame_5);
        P2_DisplayPort_2->setObjectName(QString::fromUtf8("P2_DisplayPort_2"));
        P2_DisplayPort_2->setGeometry(QRect(35, 210, 81, 61));
        P2_DisplayPort_2->setMinimumSize(QSize(81, 61));
        P2_DisplayPort_2->setCursor(QCursor(Qt::PointingHandCursor));
        P2_DisplayPort_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_24 = new QLabel(frame_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(35, 250, 81, 21));
        label_24->setMinimumSize(QSize(41, 0));
        label_24->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:2px;\n"
"font-size: 13px;\n"
"text-align:center;"));
        label_2 = new QLabel(frame_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(221, 10, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font: 23px ;\n"
"color: white;"));
        label_25 = new QLabel(frame_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(55, 320, 41, 21));
        label_25->setMinimumSize(QSize(41, 0));
        label_25->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P2_SDI_2 = new QPushButton(frame_5);
        P2_SDI_2->setObjectName(QString::fromUtf8("P2_SDI_2"));
        P2_SDI_2->setGeometry(QRect(35, 280, 81, 61));
        P2_SDI_2->setMinimumSize(QSize(81, 61));
        P2_SDI_2->setCursor(QCursor(Qt::PointingHandCursor));
        P2_SDI_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        P2_SDI_3 = new QPushButton(frame_5);
        P2_SDI_3->setObjectName(QString::fromUtf8("P2_SDI_3"));
        P2_SDI_3->setGeometry(QRect(135, 280, 81, 61));
        P2_SDI_3->setMinimumSize(QSize(81, 61));
        P2_SDI_3->setCursor(QCursor(Qt::PointingHandCursor));
        P2_SDI_3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_26 = new QLabel(frame_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(155, 320, 41, 21));
        label_26->setMinimumSize(QSize(41, 0));
        label_26->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P2_SDI_4 = new QPushButton(frame_5);
        P2_SDI_4->setObjectName(QString::fromUtf8("P2_SDI_4"));
        P2_SDI_4->setGeometry(QRect(235, 280, 81, 61));
        P2_SDI_4->setMinimumSize(QSize(81, 61));
        P2_SDI_4->setCursor(QCursor(Qt::PointingHandCursor));
        P2_SDI_4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_27 = new QLabel(frame_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(255, 320, 41, 21));
        label_27->setMinimumSize(QSize(41, 0));
        label_27->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:5px;\n"
"text-align:center;"));
        label_28 = new QLabel(frame_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(155, 180, 41, 21));
        label_28->setMinimumSize(QSize(41, 0));
        label_28->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        P2_HDMI_Button_2 = new QPushButton(frame_5);
        P2_HDMI_Button_2->setObjectName(QString::fromUtf8("P2_HDMI_Button_2"));
        P2_HDMI_Button_2->setGeometry(QRect(135, 140, 81, 61));
        P2_HDMI_Button_2->setMinimumSize(QSize(81, 61));
        P2_HDMI_Button_2->setCursor(QCursor(Qt::PointingHandCursor));
        P2_HDMI_Button_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        lbl_is_connected_2 = new QLabel(frame_5);
        lbl_is_connected_2->setObjectName(QString::fromUtf8("lbl_is_connected_2"));
        lbl_is_connected_2->setGeometry(QRect(147, 80, 121, 18));
        lbl_is_connected_2->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        lbl_brightness_1_val_2 = new QLabel(frame_5);
        lbl_brightness_1_val_2->setObjectName(QString::fromUtf8("lbl_brightness_1_val_2"));
        lbl_brightness_1_val_2->setGeometry(QRect(292, 382, 41, 21));
        lbl_brightness_1_val_2->setStyleSheet(QString::fromUtf8("color: white;"));
        sl_brightness_2 = new QSlider(frame_5);
        sl_brightness_2->setObjectName(QString::fromUtf8("sl_brightness_2"));
        sl_brightness_2->setGeometry(QRect(100, 390, 160, 16));
        sl_brightness_2->setOrientation(Qt::Horizontal);
        line_2->raise();
        label_4->raise();
        line_4->raise();
        P2_SDI_1->raise();
        P2_SDI_2->raise();
        P2_HDMI_Button_1->raise();
        P2_On_Button->raise();
        P2_SDI_4->raise();
        P2_DisplayPort_2->raise();
        P2_HDMI_Button_2->raise();
        P2_SDI_3->raise();
        P2_HDBaseT->raise();
        P2_DisplayPort_1->raise();
        lbl_is_connected_2->raise();
        lbl_brightness_1_val_2->raise();
        label_27->raise();
        label_24->raise();
        label_22->raise();
        label_26->raise();
        label_25->raise();
        label_20->raise();
        label_23->raise();
        label_28->raise();
        label_2->raise();
        label_21->raise();
        sl_brightness_2->raise();
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        frame_3 = new QFrame(page_3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(9, 1, 731, 511));
        frame_3->setStyleSheet(QString::fromUtf8("border-radius: 3px;\n"
"background: rgba(53,53,53, 0.1)"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_13 = new QPushButton(frame_3);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(11, 8, 87, 31));
        pushButton_13->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"color: #fff;\n"
"border: none;\n"
"border-radius: 3px;"));
        password_lineEdit = new QLineEdit(frame_3);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(263, 204, 201, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        font.setBold(false);
        font.setUnderline(false);
        font.setKerning(true);
        password_lineEdit->setFont(font);
        password_lineEdit->setStyleSheet(QString::fromUtf8("letter-spacing: 6px;\n"
"font-family: 'Poppins', sans-serif;\n"
"padding: 0px 10px ;  \n"
"outline: none;\n"
"border-top-left-radius: 3px;\n"
"border-top-right-radius: 3px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"transition: all 0.5s ease-in-out;\n"
"font-size: 13px;\n"
"font-weight: 200;\n"
"background-color:rgb(28, 26, 26);\n"
"text-align: center;\n"
"color: #fff;\n"
"border-bottom: 2px solid gray;"));
        password_lineEdit->setMaxLength(6);
        password_lineEdit->setEchoMode(QLineEdit::Password);
        password_lineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);
        password_lineEdit->setClearButtonEnabled(true);
        Admin_next_button = new QPushButton(frame_3);
        Admin_next_button->setObjectName(QString::fromUtf8("Admin_next_button"));
        Admin_next_button->setGeometry(QRect(263, 274, 201, 41));
        Admin_next_button->setCursor(QCursor(Qt::PointingHandCursor));
        Admin_next_button->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"color: #fff;\n"
"border: none;\n"
"border-radius: 3px;"));
        incorrect_password = new QLabel(frame_3);
        incorrect_password->setObjectName(QString::fromUtf8("incorrect_password"));
        incorrect_password->setGeometry(QRect(280, 330, 191, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(12);
        incorrect_password->setFont(font1);
        incorrect_password->setCursor(QCursor(Qt::IBeamCursor));
        incorrect_password->setStyleSheet(QString::fromUtf8("color: #FE4D4D;\n"
"background-color: transparent;\n"
""));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        frame_7 = new QFrame(page_4);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(385, 30, 351, 421));
        frame_7->setMinimumSize(QSize(351, 0));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 26, 26);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        line_7 = new QFrame(frame_7);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(20, 40, 311, 16));
        line_7->setMinimumSize(QSize(311, 0));
        line_7->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid white;"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        P2_Admin_HDMI_Button_1 = new QPushButton(frame_7);
        P2_Admin_HDMI_Button_1->setObjectName(QString::fromUtf8("P2_Admin_HDMI_Button_1"));
        P2_Admin_HDMI_Button_1->setGeometry(QRect(36, 120, 81, 61));
        P2_Admin_HDMI_Button_1->setMinimumSize(QSize(81, 61));
        P2_Admin_HDMI_Button_1->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_HDMI_Button_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        line_8 = new QFrame(frame_7);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(18, 350, 311, 16));
        line_8->setMinimumSize(QSize(311, 0));
        line_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid white;"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_38 = new QLabel(frame_7);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(56, 160, 41, 21));
        label_38->setMinimumSize(QSize(41, 0));
        label_38->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        P2_Admin_HDMI_Button_2 = new QPushButton(frame_7);
        P2_Admin_HDMI_Button_2->setObjectName(QString::fromUtf8("P2_Admin_HDMI_Button_2"));
        P2_Admin_HDMI_Button_2->setGeometry(QRect(136, 120, 81, 61));
        P2_Admin_HDMI_Button_2->setMinimumSize(QSize(81, 61));
        P2_Admin_HDMI_Button_2->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_HDMI_Button_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_39 = new QLabel(frame_7);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(156, 160, 41, 21));
        label_39->setMinimumSize(QSize(41, 0));
        label_39->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        P2_Admin_DisplayPort_1 = new QPushButton(frame_7);
        P2_Admin_DisplayPort_1->setObjectName(QString::fromUtf8("P2_Admin_DisplayPort_1"));
        P2_Admin_DisplayPort_1->setGeometry(QRect(236, 120, 81, 61));
        P2_Admin_DisplayPort_1->setMinimumSize(QSize(81, 61));
        P2_Admin_DisplayPort_1->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_DisplayPort_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_40 = new QLabel(frame_7);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(240, 160, 81, 21));
        label_40->setMinimumSize(QSize(41, 0));
        label_40->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        label_41 = new QLabel(frame_7);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(146, 230, 61, 21));
        label_41->setMinimumSize(QSize(41, 0));
        label_41->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:5px;\n"
"text-align:center;\n"
""));
        P2_Admin_HDBaseT = new QPushButton(frame_7);
        P2_Admin_HDBaseT->setObjectName(QString::fromUtf8("P2_Admin_HDBaseT"));
        P2_Admin_HDBaseT->setGeometry(QRect(136, 190, 81, 61));
        P2_Admin_HDBaseT->setMinimumSize(QSize(81, 61));
        P2_Admin_HDBaseT->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_HDBaseT->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_42 = new QLabel(frame_7);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(256, 230, 41, 21));
        label_42->setMinimumSize(QSize(41, 0));
        label_42->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P2_Admin_SDI_1 = new QPushButton(frame_7);
        P2_Admin_SDI_1->setObjectName(QString::fromUtf8("P2_Admin_SDI_1"));
        P2_Admin_SDI_1->setGeometry(QRect(236, 190, 81, 61));
        P2_Admin_SDI_1->setMinimumSize(QSize(81, 61));
        P2_Admin_SDI_1->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_SDI_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        P2_Admin_DisplayPort_2 = new QPushButton(frame_7);
        P2_Admin_DisplayPort_2->setObjectName(QString::fromUtf8("P2_Admin_DisplayPort_2"));
        P2_Admin_DisplayPort_2->setGeometry(QRect(36, 190, 81, 61));
        P2_Admin_DisplayPort_2->setMinimumSize(QSize(81, 61));
        P2_Admin_DisplayPort_2->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_DisplayPort_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_43 = new QLabel(frame_7);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(36, 230, 81, 21));
        label_43->setMinimumSize(QSize(41, 0));
        label_43->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:2px;\n"
"font-size: 13px;\n"
"text-align:center;"));
        label_8 = new QLabel(frame_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 10, 111, 31));
        label_8->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font: 23px ;\n"
"color: white;"));
        label_44 = new QLabel(frame_7);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(56, 300, 41, 21));
        label_44->setMinimumSize(QSize(41, 0));
        label_44->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P2_Admin_SDI_2 = new QPushButton(frame_7);
        P2_Admin_SDI_2->setObjectName(QString::fromUtf8("P2_Admin_SDI_2"));
        P2_Admin_SDI_2->setGeometry(QRect(36, 260, 81, 61));
        P2_Admin_SDI_2->setMinimumSize(QSize(81, 61));
        P2_Admin_SDI_2->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_SDI_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        P2_Admin_SDI_3 = new QPushButton(frame_7);
        P2_Admin_SDI_3->setObjectName(QString::fromUtf8("P2_Admin_SDI_3"));
        P2_Admin_SDI_3->setGeometry(QRect(133, 260, 81, 61));
        P2_Admin_SDI_3->setMinimumSize(QSize(81, 61));
        P2_Admin_SDI_3->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_SDI_3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_45 = new QLabel(frame_7);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(156, 300, 41, 21));
        label_45->setMinimumSize(QSize(41, 0));
        label_45->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P2_Admin_SDI_4 = new QPushButton(frame_7);
        P2_Admin_SDI_4->setObjectName(QString::fromUtf8("P2_Admin_SDI_4"));
        P2_Admin_SDI_4->setGeometry(QRect(236, 260, 81, 61));
        P2_Admin_SDI_4->setMinimumSize(QSize(81, 61));
        P2_Admin_SDI_4->setCursor(QCursor(Qt::PointingHandCursor));
        P2_Admin_SDI_4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_46 = new QLabel(frame_7);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(256, 300, 41, 21));
        label_46->setMinimumSize(QSize(41, 0));
        label_46->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:5px;\n"
"text-align:center;"));
        P2_Admin_HDMI_label_2 = new QLabel(frame_7);
        P2_Admin_HDMI_label_2->setObjectName(QString::fromUtf8("P2_Admin_HDMI_label_2"));
        P2_Admin_HDMI_label_2->setGeometry(QRect(136, 120, 81, 61));
        P2_Admin_HDMI_label_2->setStyleSheet(QString::fromUtf8("max-height: 50px;\n"
"min-height:61;\n"
"min-width:81;\n"
"background-color:rgb(255, 120, 0);\n"
"border-radius: 8%;\n"
"border: none;\n"
"background-repeat: none;"));
        label_10 = new QLabel(frame_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 20, 49, 16));
        label_10->setStyleSheet(QString::fromUtf8("color: white;"));
        P2_Admin_HDMI_label_2->raise();
        line_7->raise();
        line_8->raise();
        P2_Admin_DisplayPort_1->raise();
        P2_Admin_HDMI_Button_2->raise();
        P2_Admin_HDBaseT->raise();
        P2_Admin_SDI_4->raise();
        P2_Admin_HDMI_Button_1->raise();
        P2_Admin_SDI_1->raise();
        P2_Admin_SDI_2->raise();
        P2_Admin_DisplayPort_2->raise();
        P2_Admin_SDI_3->raise();
        label_46->raise();
        label_10->raise();
        label_8->raise();
        label_42->raise();
        label_43->raise();
        label_45->raise();
        label_41->raise();
        label_40->raise();
        label_44->raise();
        label_39->raise();
        label_38->raise();
        frame_6 = new QFrame(page_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(15, 30, 351, 421));
        frame_6->setMinimumSize(QSize(351, 0));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 26, 26);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        line_5 = new QFrame(frame_6);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(20, 38, 311, 16));
        line_5->setMinimumSize(QSize(311, 0));
        line_5->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid white;"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        P1_Admin_HDMI_Button_1 = new QPushButton(frame_6);
        P1_Admin_HDMI_Button_1->setObjectName(QString::fromUtf8("P1_Admin_HDMI_Button_1"));
        P1_Admin_HDMI_Button_1->setGeometry(QRect(34, 120, 81, 61));
        P1_Admin_HDMI_Button_1->setMinimumSize(QSize(81, 61));
        P1_Admin_HDMI_Button_1->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_HDMI_Button_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        line_6 = new QFrame(frame_6);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(16, 350, 311, 16));
        line_6->setMinimumSize(QSize(311, 0));
        line_6->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-bottom: 2px solid white;"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        P1_Admin_HDMI_Text_1 = new QLabel(frame_6);
        P1_Admin_HDMI_Text_1->setObjectName(QString::fromUtf8("P1_Admin_HDMI_Text_1"));
        P1_Admin_HDMI_Text_1->setGeometry(QRect(54, 160, 41, 21));
        P1_Admin_HDMI_Text_1->setMinimumSize(QSize(41, 0));
        P1_Admin_HDMI_Text_1->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        P1_Admin_DisplayPort_1 = new QPushButton(frame_6);
        P1_Admin_DisplayPort_1->setObjectName(QString::fromUtf8("P1_Admin_DisplayPort_1"));
        P1_Admin_DisplayPort_1->setGeometry(QRect(234, 121, 81, 61));
        P1_Admin_DisplayPort_1->setMinimumSize(QSize(81, 61));
        P1_Admin_DisplayPort_1->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_DisplayPort_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_30 = new QLabel(frame_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(230, 160, 81, 21));
        label_30->setMinimumSize(QSize(41, 0));
        label_30->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:2px;\n"
"font-size: 13px;\n"
"text-align:center;"));
        label_31 = new QLabel(frame_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(144, 230, 61, 21));
        label_31->setMinimumSize(QSize(41, 0));
        label_31->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:6px;\n"
"text-align:center;"));
        P1_Admin_HDBaseT = new QPushButton(frame_6);
        P1_Admin_HDBaseT->setObjectName(QString::fromUtf8("P1_Admin_HDBaseT"));
        P1_Admin_HDBaseT->setGeometry(QRect(134, 190, 81, 61));
        P1_Admin_HDBaseT->setMinimumSize(QSize(81, 61));
        P1_Admin_HDBaseT->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_HDBaseT->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_32 = new QLabel(frame_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(254, 230, 41, 21));
        label_32->setMinimumSize(QSize(41, 0));
        label_32->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:5px;\n"
"text-align:center;"));
        P1_Admin_SDI_1 = new QPushButton(frame_6);
        P1_Admin_SDI_1->setObjectName(QString::fromUtf8("P1_Admin_SDI_1"));
        P1_Admin_SDI_1->setGeometry(QRect(234, 190, 81, 61));
        P1_Admin_SDI_1->setMinimumSize(QSize(81, 61));
        P1_Admin_SDI_1->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_SDI_1->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        P1_Admin_DisplayPort_2 = new QPushButton(frame_6);
        P1_Admin_DisplayPort_2->setObjectName(QString::fromUtf8("P1_Admin_DisplayPort_2"));
        P1_Admin_DisplayPort_2->setGeometry(QRect(34, 190, 81, 61));
        P1_Admin_DisplayPort_2->setMinimumSize(QSize(81, 61));
        P1_Admin_DisplayPort_2->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_DisplayPort_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_33 = new QLabel(frame_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(34, 230, 81, 21));
        label_33->setMinimumSize(QSize(41, 0));
        label_33->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:5px;\n"
"margin-left:2px;\n"
"font-size: 13px;\n"
"text-align:center;"));
        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 10, 111, 31));
        label_6->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"font: 23px ;\n"
"color: white;"));
        label_34 = new QLabel(frame_6);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(54, 300, 41, 21));
        label_34->setMinimumSize(QSize(41, 0));
        label_34->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P1_Admin_SDI_2 = new QPushButton(frame_6);
        P1_Admin_SDI_2->setObjectName(QString::fromUtf8("P1_Admin_SDI_2"));
        P1_Admin_SDI_2->setGeometry(QRect(34, 260, 81, 61));
        P1_Admin_SDI_2->setMinimumSize(QSize(81, 61));
        P1_Admin_SDI_2->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_SDI_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        P1_Admin_SDI_3 = new QPushButton(frame_6);
        P1_Admin_SDI_3->setObjectName(QString::fromUtf8("P1_Admin_SDI_3"));
        P1_Admin_SDI_3->setGeometry(QRect(134, 260, 81, 61));
        P1_Admin_SDI_3->setMinimumSize(QSize(81, 61));
        P1_Admin_SDI_3->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_SDI_3->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_35 = new QLabel(frame_6);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(154, 300, 41, 21));
        label_35->setMinimumSize(QSize(41, 0));
        label_35->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:3px;\n"
"text-align:center;"));
        P1_Admin_SDI_4 = new QPushButton(frame_6);
        P1_Admin_SDI_4->setObjectName(QString::fromUtf8("P1_Admin_SDI_4"));
        P1_Admin_SDI_4->setGeometry(QRect(234, 260, 81, 61));
        P1_Admin_SDI_4->setMinimumSize(QSize(81, 61));
        P1_Admin_SDI_4->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_SDI_4->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_36 = new QLabel(frame_6);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(254, 300, 41, 21));
        label_36->setMinimumSize(QSize(41, 0));
        label_36->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;\n"
"margin-top:8px;\n"
"margin-left:5px;\n"
"text-align:center;"));
        label_37 = new QLabel(frame_6);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(154, 160, 41, 21));
        label_37->setMinimumSize(QSize(41, 0));
        label_37->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"font-weight:bold;\n"
"color: black;"));
        P1_Admin_HDMI_Button_2 = new QPushButton(frame_6);
        P1_Admin_HDMI_Button_2->setObjectName(QString::fromUtf8("P1_Admin_HDMI_Button_2"));
        P1_Admin_HDMI_Button_2->setGeometry(QRect(134, 120, 81, 61));
        P1_Admin_HDMI_Button_2->setMinimumSize(QSize(81, 61));
        P1_Admin_HDMI_Button_2->setCursor(QCursor(Qt::PointingHandCursor));
        P1_Admin_HDMI_Button_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 120, 0);"));
        label_9 = new QLabel(frame_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 18, 49, 16));
        label_9->setStyleSheet(QString::fromUtf8("color: white;"));
        P1_Admin_HDMI_Text_1->raise();
        P1_Admin_HDMI_Button_1->raise();
        P1_Admin_HDBaseT->raise();
        P1_Admin_DisplayPort_2->raise();
        P1_Admin_SDI_2->raise();
        P1_Admin_SDI_1->raise();
        P1_Admin_SDI_4->raise();
        P1_Admin_DisplayPort_1->raise();
        P1_Admin_SDI_3->raise();
        P1_Admin_HDMI_Button_2->raise();
        line_5->raise();
        label_6->raise();
        label_36->raise();
        label_34->raise();
        label_37->raise();
        label_35->raise();
        line_6->raise();
        label_31->raise();
        label_30->raise();
        label_32->raise();
        label_33->raise();
        label_9->raise();
        frame_2 = new QFrame(page_4);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 0, 731, 511));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(5, 460, 721, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border: none;\n"
"border-radius: 3px;\n"
"color: #fff;\n"
"font-weight: bold;"));
        stackedWidget->addWidget(page_4);
        frame_2->raise();
        frame_7->raise();
        frame_6->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Projector Remote Controller", nullptr));
        startButton->setText(QString());
        P1_HDMI_Button_1->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Brightness:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "HDMI", nullptr));
        P1_DisplayPort_1->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "DIsplayPort", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "HDBaseT", nullptr));
        P1_HDBaseT->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P1_SDI_1->setText(QString());
        P1_On_Button->setText(QString());
        P1_DisplayPort_2->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "DIsplayPort", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Projecor 1 ", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P1_SDI_2->setText(QString());
        P1_SDI_3->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P1_SDI_4->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "HDMI", nullptr));
        P1_HDMI_Button_2->setText(QString());
        lbl_is_connected_1->setText(QCoreApplication::translate("MainWindow", "connection status", nullptr));
        lbl_brightness_1_val_1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Admin_button->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        Sleep_Button->setText(QCoreApplication::translate("MainWindow", "Sleep", nullptr));
        P2_HDMI_Button_1->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Brightness:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "HDMI", nullptr));
        P2_DisplayPort_1->setText(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "DIsplayPort", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "HDBaseT", nullptr));
        P2_HDBaseT->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P2_SDI_1->setText(QString());
        P2_On_Button->setText(QString());
        P2_DisplayPort_2->setText(QString());
        label_24->setText(QCoreApplication::translate("MainWindow", "DIsplayPort", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Projecor 2", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P2_SDI_2->setText(QString());
        P2_SDI_3->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P2_SDI_4->setText(QString());
        label_27->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "HDMI", nullptr));
        P2_HDMI_Button_2->setText(QString());
        lbl_is_connected_2->setText(QCoreApplication::translate("MainWindow", "connection status", nullptr));
        lbl_brightness_1_val_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
#if QT_CONFIG(tooltip)
        password_lineEdit->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        password_lineEdit->setText(QString());
        password_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Admin_next_button->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        incorrect_password->setText(QCoreApplication::translate("MainWindow", "Incorrect password", nullptr));
        P2_Admin_HDMI_Button_1->setText(QString());
        label_38->setText(QCoreApplication::translate("MainWindow", "HDMI", nullptr));
        P2_Admin_HDMI_Button_2->setText(QString());
        label_39->setText(QCoreApplication::translate("MainWindow", "HDMI", nullptr));
        P2_Admin_DisplayPort_1->setText(QString());
        label_40->setText(QCoreApplication::translate("MainWindow", "DIsplayPort", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "HDBaseT", nullptr));
        P2_Admin_HDBaseT->setText(QString());
        label_42->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P2_Admin_SDI_1->setText(QString());
        P2_Admin_DisplayPort_2->setText(QString());
        label_43->setText(QCoreApplication::translate("MainWindow", "DIsplayPort", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Projecor 2", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P2_Admin_SDI_2->setText(QString());
        P2_Admin_SDI_3->setText(QString());
        label_45->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P2_Admin_SDI_4->setText(QString());
        label_46->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P2_Admin_HDMI_label_2->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        P1_Admin_HDMI_Button_1->setText(QString());
        P1_Admin_HDMI_Text_1->setText(QCoreApplication::translate("MainWindow", "HDMI", nullptr));
        P1_Admin_DisplayPort_1->setText(QString());
        label_30->setText(QCoreApplication::translate("MainWindow", "DIsplayPort", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "HDBaseT", nullptr));
        P1_Admin_HDBaseT->setText(QString());
        label_32->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P1_Admin_SDI_1->setText(QString());
        P1_Admin_DisplayPort_2->setText(QString());
        label_33->setText(QCoreApplication::translate("MainWindow", "DIsplayPort", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Projecor 1 ", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P1_Admin_SDI_2->setText(QString());
        P1_Admin_SDI_3->setText(QString());
        label_35->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        P1_Admin_SDI_4->setText(QString());
        label_36->setText(QCoreApplication::translate("MainWindow", "SDI", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "HDMI", nullptr));
        P1_Admin_HDMI_Button_2->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "SAVE CHANGES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
