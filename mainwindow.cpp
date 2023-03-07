#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->stackedWidget->setCurrentIndex(0);
       QPushButton *addButton = new QPushButton(QIcon(":/HDMI.png"),"");
       QString buttonStyle = "QPushButton{border:none;background-color:rgba(255, 255, 255,100);}";
       addButton->setStyleSheet(buttonStyle); // Style sheet
       addButton->setIconSize(QSize(50,50));
       addButton->setMinimumSize(50,50);
       addButton->setMaximumSize(50,50);


       //++++++++++++++++++++++++++++++++++++++++++++++OPERATOR     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

       QObject::connect(this->ui->P1_HDMI_Button_1, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, "p1");});
       QObject::connect(this->ui->P1_HDMI_Button_2, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_HDMI_Button_2, this->ui->P1_HDMI_label_2, "p1");});
       QObject::connect(this->ui->P1_DisplayPort_1, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_DisplayPort_1, this->ui->P1_DisplayPort_label_1, "p1");});
       QObject::connect(this->ui->P1_DisplayPort_2, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_DisplayPort_2, this->ui->P1_DisplayPort_label_2, "p1");});
       QObject::connect(this->ui->P1_HDBaseT, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_HDBaseT, this->ui->P1_HDBaseT_label, "p1");});
       QObject::connect(this->ui->P1_SDI_1, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_SDI_1, this->ui->P1_SDI_label_1, "p1");});
       QObject::connect(this->ui->P1_SDI_2, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_SDI_2, this->ui->P1_SDI_label_2, "p1");});
       QObject::connect(this->ui->P1_SDI_3, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_SDI_3, this->ui->P1_SDI_label_3, "p1");});
       QObject::connect(this->ui->P1_SDI_4, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P1_SDI_4, this->ui->P1_SDI_label_4, "p1");});

       Active_btn = ui->P1_HDMI_Button_1;
       btn_label= ui->P1_HDMI_label_1;

       //++++++++++++++++++++++++++++++++++++++++++++++OPERATOR     projecotr 2++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

       QObject::connect(this->ui->P2_HDMI_Button_1, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_HDMI_Button_1, this->ui->P2_HDMI_label_1, "p2");});
       QObject::connect(this->ui->P2_HDMI_Button_2, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_HDMI_Button_2, this->ui->P2_HDMI_label_2, "p2");});
       QObject::connect(this->ui->P2_HDBaseT, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_HDBaseT, this->ui->P2_HDBaseT_label, "p2");});
       QObject::connect(this->ui->P2_DisplayPort_1, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_DisplayPort_1, this->ui->P2_DisplayPort_label_1, "p2");});
       QObject::connect(this->ui->P2_DisplayPort_2, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_DisplayPort_2, this->ui->P2_DisplayPort_label_2, "p2");});
       QObject::connect(this->ui->P2_SDI_1, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_SDI_1, this->ui->P2_SDI_label_1, "p2");});
       QObject::connect(this->ui->P2_SDI_2, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_SDI_2, this->ui->P2_SDI_label_2, "p2");});
       QObject::connect(this->ui->P2_SDI_3, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_SDI_3, this->ui->P2_SDI_label_3, "p2");});
       QObject::connect(this->ui->P2_SDI_4, &QPushButton::clicked, this, [=](){changeColorInActive(this->ui->P2_SDI_4, this->ui->P2_SDI_label_4, "p2");});


       //++++++++++++++++++++++++++++++++++++++++++++++ADMIN     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

       QObject::connect(this->ui->P1_Admin_HDMI_Button_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_HDMI_label_1);});
       QObject::connect(this->ui->P1_Admin_HDMI_Button_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_HDMI_label_2);});
       QObject::connect(this->ui->P1_Admin_DisplayPort_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_DisplayPort_label_1);});
       QObject::connect(this->ui->P1_Admin_DisplayPort_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_DisplayPort_label_2);});
       QObject::connect(this->ui->P1_Admin_HDBaseT, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_HDBaseT_label);});
       QObject::connect(this->ui->P1_Admin_SDI_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_SDI_label_1);});
       QObject::connect(this->ui->P1_Admin_SDI_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_SDI_label_2);});
       QObject::connect(this->ui->P1_Admin_SDI_3, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_SDI_label_3);});
       QObject::connect(this->ui->P1_Admin_SDI_4, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_SDI_label_4);});

       //++++++++++++++++++++++++++++++++++++++++++++++ADMIN     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

       QObject::connect(this->ui->P1_Admin_HDMI_Button_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_HDMI_label_1);});
       QObject::connect(this->ui->P1_Admin_HDMI_Button_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_HDMI_label_2);});
       QObject::connect(this->ui->P1_Admin_DisplayPort_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_DisplayPort_label_1);});
       QObject::connect(this->ui->P1_Admin_DisplayPort_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_DisplayPort_label_2);});
       QObject::connect(this->ui->P1_Admin_HDBaseT, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_HDBaseT_label);});
       QObject::connect(this->ui->P1_Admin_SDI_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_SDI_label_1);});
       QObject::connect(this->ui->P1_Admin_SDI_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_SDI_label_2);});
       QObject::connect(this->ui->P1_Admin_SDI_3, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_SDI_label_3);});
       QObject::connect(this->ui->P1_Admin_SDI_4, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P2_SDI_label_4);});

       Active_btn2 = ui->P2_HDMI_Button_1;
       btn_label2= ui->P2_HDMI_label_1;
}

MainWindow::~MainWindow()
{
    delete Active_btn;
    delete btn_label;
    delete Active_btn2;
    delete btn_label2;
//    delete Disable_btn;
    delete ui;
}
QString Orange ="max-height: 50px;\n"
        "min-height:61;\n"
        "min-width:81;\n"
        "background-color: rgb(255, 120, 0);\n"
        "border-radius: 8%;\n"
        "border: none;\n"
        "background-repeat: none;\n";
QString Green ="max-height: 50px;\n"
               "min-height:61;\n"
               "min-width:81;\n"
               "background-color: rgb(46, 194, 126);\n"
               "border-radius: 8%;\n"
               "border: none;\n";
QString Gray ="max-height: 50px;\n"
               "min-height:61;\n"
               "min-width:81;\n"
               "background-color: gray;\n"
               "border-radius: 8%;\n"
               "border: none;\n";

void MainWindow::changeColorInActive(QPushButton *_btn, QLabel *lab, QString pNum){
 if (pNum == "p1"){
    if (Active_btn->isEnabled())
    {
      btn_label -> setStyleSheet(Orange);
   }
      btn_label = lab;
      btn_label -> setStyleSheet(Green);
      Active_btn = _btn;
    }
    else  {
        if (Active_btn2->isEnabled())
        {
         btn_label2 -> setStyleSheet(Orange);
        }
        btn_label2 = lab;
        btn_label2 -> setStyleSheet(Green);
        Active_btn2 = _btn;
    }

}
void MainWindow::BtnControl(QPushButton *btn, QLabel *label, QLabel *Selflabel){
      if (btn->isEnabled())
      {
        btn->setEnabled(false);
        label -> setStyleSheet(Gray);
        Selflabel -> setStyleSheet(Gray);
      }else{
        btn->setEnabled(true);
        label -> setStyleSheet(Orange);
        Selflabel -> setStyleSheet(Orange);
      }
}


void MainWindow::on_startButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Admin_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Sleep_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_14_clicked()
{
   QString password = ui->password_lineEdit->text();
   if(password =="35870"){
        ui->stackedWidget->setCurrentIndex(3);
        ui->password_lineEdit->setText("");
   }
}


void MainWindow::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

