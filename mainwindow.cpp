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
    delete Active_btn;
    delete btn_label;
    delete Active_btn2;
    delete btn_label2;
//    delete Disable_btn;
    delete ui;
}


void MainWindow::changeColorInActive(QPushButton *_btn, QLabel *lab, int btn_num){
    if (btn_num < 10){
        if (Active_btn->isEnabled())
            btn_label -> setStyleSheet(this->Orange);
        btn_label = lab;
        btn_label -> setStyleSheet(Green);
        Active_btn = _btn;
    }
    else
    {
        if (Active_btn2->isEnabled())
            btn_label2 -> setStyleSheet(this->Orange);
        btn_label2 = lab;
        btn_label2 -> setStyleSheet(this->Green);
        Active_btn2 = _btn;
    }

}
void MainWindow::BtnControl(QPushButton *btn, QLabel *label, QLabel *Selflabel){
      if (btn->isEnabled())
      {
        btn->setEnabled(false);
        label -> setStyleSheet(this->Gray);
        Selflabel -> setStyleSheet(this->Gray);
      }else{
        btn->setEnabled(true);
        label -> setStyleSheet(this->Orange);
        Selflabel -> setStyleSheet(this->Orange);
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
   if(password.toInt() == this->password){
        ui->stackedWidget->setCurrentIndex(3);
        ui->password_lineEdit->setText("");
   }
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::command(int btn_id)
{
    switch (btn_id) {
    case 1:

        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;
    case 5:

        break;
    case 6:

        break;
    case 7:

        break;
    case 8:

        break;
    case 9:

        break;
    case 10:

        break;
    case 11:

        break;
    case 12:

        break;
    case 13:

        break;
    case 14:

        break;
    case 15:

        break;
    case 16:

        break;
    case 17:

        break;
    case 18:

        break;
    default:
        break;
    }
}

