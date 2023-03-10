#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->ui->setupUi(this);
    this->ui->stackedWidget->setCurrentIndex(0);
    this->ui->incorrect_password->setText("");


    //++++++++++++++++++++++++++++++++++++++++++++++OPERATOR     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P1_HDMI_Button_1, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, 1); this->command(1);});
    QObject::connect(this->ui->P1_HDMI_Button_2, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_HDMI_Button_2, this->ui->P1_HDMI_label_2, 2); this->command(2);});
    QObject::connect(this->ui->P1_DisplayPort_1, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_DisplayPort_1, this->ui->P1_DisplayPort_label_1, 3);this->command(3);});
    QObject::connect(this->ui->P1_DisplayPort_2, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_DisplayPort_2, this->ui->P1_DisplayPort_label_2, 4); this->command(4);});
    QObject::connect(this->ui->P1_HDBaseT, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_HDBaseT, this->ui->P1_HDBaseT_label, 5); this->command(5);});
    QObject::connect(this->ui->P1_SDI_1, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_SDI_1, this->ui->P1_SDI_label_1, 6); this->command(6);});
    QObject::connect(this->ui->P1_SDI_2, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_SDI_2, this->ui->P1_SDI_label_2, 7); this->command(7);});
    QObject::connect(this->ui->P1_SDI_3, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_SDI_3, this->ui->P1_SDI_label_3, 8); this->command(8);});
    QObject::connect(this->ui->P1_SDI_4, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P1_SDI_4, this->ui->P1_SDI_label_4, 9); this->command(9);});

    Active_btn = ui->P1_HDMI_Button_1;
    btn_label= ui->P1_HDMI_label_1;

    //++++++++++++++++++++++++++++++++++++++++++++++OPERATOR     projecotr 2++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P2_HDMI_Button_1, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_HDMI_Button_1, this->ui->P2_HDMI_label_1, 10); this->command(10);});
    QObject::connect(this->ui->P2_HDMI_Button_2, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_HDMI_Button_2, this->ui->P2_HDMI_label_2, 11); this->command(11);});
    QObject::connect(this->ui->P2_HDBaseT, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_HDBaseT, this->ui->P2_HDBaseT_label, 12); this->command(12);});
    QObject::connect(this->ui->P2_DisplayPort_1, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_DisplayPort_1, this->ui->P2_DisplayPort_label_1, 13); this->command(13);});
    QObject::connect(this->ui->P2_DisplayPort_2, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_DisplayPort_2, this->ui->P2_DisplayPort_label_2, 14); this->command(14);});
    QObject::connect(this->ui->P2_SDI_1, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_SDI_1, this->ui->P2_SDI_label_1, 15); this->command(15);});
    QObject::connect(this->ui->P2_SDI_2, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_SDI_2, this->ui->P2_SDI_label_2, 16); this->command(16);});
    QObject::connect(this->ui->P2_SDI_3, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_SDI_3, this->ui->P2_SDI_label_3, 17); this->command(17);});
    QObject::connect(this->ui->P2_SDI_4, &QPushButton::clicked, this, [=](){this->changeColorInActive(this->ui->P2_SDI_4, this->ui->P2_SDI_label_4, 18); this->command(18);});


    //++++++++++++++++++++++++++++++++++++++++++++++ADMIN     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P1_Admin_HDMI_Button_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_HDMI_label_1);});
    QObject::connect(this->ui->P1_Admin_HDMI_Button_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDMI_Button_2, this->ui->P1_HDMI_label_2, this->ui->P1_Admin_HDMI_label_2);});
    QObject::connect(this->ui->P1_Admin_DisplayPort_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_DisplayPort_1, this->ui->P1_DisplayPort_label_1, this->ui->P1_Admin_DisplayPort_label_1);});
    QObject::connect(this->ui->P1_Admin_DisplayPort_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_DisplayPort_2, this->ui->P1_DisplayPort_label_2, this->ui->P1_Admin_DisplayPort_label_2);});
    QObject::connect(this->ui->P1_Admin_HDBaseT, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_HDBaseT, this->ui->P1_HDBaseT_label, this->ui->P1_Admin_HDBaseT_label);});
    QObject::connect(this->ui->P1_Admin_SDI_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_SDI_1, this->ui->P1_SDI_label_1, this->ui->P1_Admin_SDI_label_1);});
    QObject::connect(this->ui->P1_Admin_SDI_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_SDI_2, this->ui->P1_SDI_label_2, this->ui->P1_Admin_SDI_label_2);});
    QObject::connect(this->ui->P1_Admin_SDI_3, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_SDI_3, this->ui->P1_SDI_label_3, this->ui->P1_Admin_SDI_label_3);});
    QObject::connect(this->ui->P1_Admin_SDI_4, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P1_SDI_4, this->ui->P1_SDI_label_4, this->ui->P1_Admin_SDI_label_4);});

    //++++++++++++++++++++++++++++++++++++++++++++++ADMIN     projecotr 2++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P2_Admin_HDMI_Button_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_HDMI_Button_1, this->ui->P2_HDMI_label_1, this->ui->P2_Admin_HDMI_label_1);});
    QObject::connect(this->ui->P2_Admin_HDMI_Button_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_HDMI_Button_2, this->ui->P2_HDMI_label_2, this->ui->P2_Admin_HDMI_label_2);});
    QObject::connect(this->ui->P2_Admin_DisplayPort_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_DisplayPort_1, this->ui->P2_DisplayPort_label_1, this->ui->P2_Admin_DisplayPort_label_1);});
    QObject::connect(this->ui->P2_Admin_DisplayPort_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_DisplayPort_2, this->ui->P2_DisplayPort_label_2, this->ui->P2_Admin_DisplayPort_label_2);});
    QObject::connect(this->ui->P2_Admin_HDBaseT, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_HDBaseT, this->ui->P2_HDBaseT_label, this->ui->P2_Admin_HDBaseT_label);});
    QObject::connect(this->ui->P2_Admin_SDI_1, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_SDI_1, this->ui->P2_SDI_label_1, this->ui->P2_Admin_SDI_label_1);});
    QObject::connect(this->ui->P2_Admin_SDI_2, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_SDI_2, this->ui->P2_SDI_label_2, this->ui->P2_Admin_SDI_label_2);});
    QObject::connect(this->ui->P2_Admin_SDI_3, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_SDI_3, this->ui->P2_SDI_label_3, this->ui->P2_Admin_SDI_label_3);});
    QObject::connect(this->ui->P2_Admin_SDI_4, &QPushButton::clicked, this, [=](){this->BtnControl(this->ui->P2_SDI_4, this->ui->P2_SDI_label_4, this->ui->P2_Admin_SDI_label_4);});

    Active_btn2 = ui->P2_HDMI_Button_1;
    btn_label2= ui->P2_HDMI_label_1;
}

MainWindow::~MainWindow()
{
    delete this->Active_btn;
    delete this->btn_label;
    delete this->Active_btn2;
    delete this->btn_label2;
    delete this->ui;
    delete this->custom_style;
    //delete Disable_btn;
}


void MainWindow::changeColorInActive(QPushButton *_btn, QLabel *lab, int btn_num){
    if (btn_num < 10){
        if (Active_btn->isEnabled())
            btn_label -> setStyleSheet(this->custom_style->Orange);
        btn_label = lab;
        btn_label -> setStyleSheet(this->custom_style->Green);
        Active_btn = _btn;
    }
    else
    {
        if (Active_btn2->isEnabled())
            btn_label2 -> setStyleSheet(this->custom_style->Orange);
        btn_label2 = lab;
        btn_label2 -> setStyleSheet(this->custom_style->Green);
        Active_btn2 = _btn;
    }

}
void MainWindow::BtnControl(QPushButton *btn, QLabel *label, QLabel *Selflabel){
      if (btn->isEnabled())
      {
        btn->setEnabled(false);
        label -> setStyleSheet(this->custom_style->Gray);
        Selflabel -> setStyleSheet(this->custom_style->Gray);
      }else{
        btn->setEnabled(true);
        label -> setStyleSheet(this->custom_style->Orange);
        Selflabel -> setStyleSheet(this->custom_style->Orange);
      }
}


void MainWindow::on_startButton_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Admin_button_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Sleep_Button_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_14_clicked()
{
   QString password = ui->password_lineEdit->text();
   if(password.toInt() == this->password){
        this->ui->stackedWidget->setCurrentIndex(3);
        this->ui->password_lineEdit->setText("");
   }
   else
       this->ui->incorrect_password->setText("Incorrect password!");
}


void MainWindow::on_pushButton_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(1);
    this->ui->incorrect_password->setText("");
    this->ui->password_lineEdit->setText("");
}


void MainWindow::on_pushButton_13_clicked()
{
    this->ui->incorrect_password->setText("");
    this->ui->password_lineEdit->setText("");
    this->ui->stackedWidget->setCurrentIndex(1);
}
/*method to send projector command for a clicked button*/
void MainWindow::command(int btn_id)
{
    switch (btn_id) {
    case 1:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xA1 0xA9";
        break;
    case 2:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xA2 0xAA";
        break;
    case 3:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xBF 0xC7";
        break;
    case 4:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xA6 0xAE";
        break;
     case 5:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xA7 0xAF";
        break;
    case 6:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xC4 0xCC";
        break;
    case 7:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xC5 0xCD";
        break;
    case 8:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xC6 0xCE";
        break;
    case 9:
        this->active_commandData = "0x02 0x03 0x00 0x00 0x02 0x01 0xC7 0xCF";
    default:
        break;
    }
}


void MainWindow::on_password_lineEdit_cursorPositionChanged()
{

   if(this->ui->password_lineEdit->text().size() > 0)
       this->ui->password_lineEdit->setStyleSheet(this->custom_style->border);
   else
       this->ui->password_lineEdit->setStyleSheet(this->custom_style->rm_border);
   this->ui->incorrect_password->setText("");
}


