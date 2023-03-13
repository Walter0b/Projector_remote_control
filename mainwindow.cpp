#include "mainwindow.h"
#include <QValidator>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QShortcut>
#include <QHBoxLayout>
#include <QThread>
#include <QtConcurrent/QtConcurrentRun>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),

      tcpSocket_1(new QTcpSocket(this)),
      tcpSocket_2(new QTcpSocket(this))

{

    this->ui->setupUi(this);
    this->ui->stackedWidget->setCurrentIndex(0);
    this->ui->incorrect_password->setText("");

    QFile f{":/utils.txt"};
    QString allDataFile = "";
    if (f.exists())
    {
        if (f.open(QIODevice::ReadOnly))
        {
            QTextStream in{&f};
            if (!in.atEnd())
            {
                allDataFile = in.readLine();
                QStringList allDataFile_split = allDataFile.split('-');
                host_1 = allDataFile_split[1];
                host_2 = allDataFile_split[2];
            }
        }
    }


    ui->lbl_is_connected_1->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    tcpSocket_1->connectToHost(host_1, 7142);
    if (tcpSocket_1->waitForConnected())
    {
        is_connected_1 = true;
        powerState_1 = true;
        ui->lbl_is_connected_1->setText("Connected");
        ui->lbl_is_connected_1->setStyleSheet("color:green; font-size:15px;");
        this->ui->sl_brightness_1->setEnabled(true);
    }
    else
    {
        is_connected_1 = false;
        powerState_1 = false;
        //------------signal that the projector is offline-----//
        this->ui->lbl_is_connected_1->setText("Not Connected");
        this->ui->lbl_is_connected_1->setStyleSheet("color:red; font-size:15px;");
        this->ui->sl_brightness_1->setEnabled(false);
    }
    connect(tcpSocket_1, &QTcpSocket::disconnected, this, &MainWindow::disconnected_1);

    ui->lbl_is_connected_2->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    tcpSocket_2->connectToHost(host_2, 7142);
    if (tcpSocket_2->waitForConnected())
    {
        is_connected_2 = true;
        powerState_2 = true;
        ui->lbl_is_connected_2->setText("Connected");
        ui->lbl_is_connected_2->setStyleSheet("color:green; font-size:15px;");
        this->ui->sl_brightness_2->setEnabled(true);
    }
    else
    {
        is_connected_2 = false;
        powerState_2 = false;
        ui->lbl_is_connected_2->setText("Not Connected");
        ui->lbl_is_connected_2->setStyleSheet("color:red; font-size:15px;");
        this->ui->sl_brightness_2->setEnabled(false);
    }

    connect(tcpSocket_2, &QTcpSocket::disconnected, this, &MainWindow::disconnected_2);

    socketStream_1.setDevice(tcpSocket_1);
    socketStream_2.setDevice(tcpSocket_2);

    connectThread = new ConnectThread(this, is_connected_1, is_connected_2, host_1, host_2);
    connectThread->start();
    connect(connectThread, &ConnectThread::connexionStatusChanged_1, this, &MainWindow::onConnexionStatusChanged_1);
    connect(connectThread, &ConnectThread::connexionStatusChanged_2, this, &MainWindow::onConnexionStatusChanged_2);

    //++++++++++++++++++++++++++++++++++++++++++++++OPERATOR     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P1_HDMI_Button_1, &QPushButton::clicked, this, [=]() {this->command(1, "P1",this->ui->P1_HDMI_Button_1); });
    QObject::connect(this->ui->P1_HDMI_Button_2, &QPushButton::clicked, this, [=]() {this->command(2, "P1",this->ui->P1_HDMI_Button_2); });
    QObject::connect(this->ui->P1_HDBaseT, &QPushButton::clicked, this, [=](){ this->command(3, "P1",this->ui->P1_HDBaseT); });
    QObject::connect(this->ui->P1_DisplayPort_1, &QPushButton::clicked, this, [=]() {this->command(4, "P1",this->ui->P1_DisplayPort_1); });
    QObject::connect(this->ui->P1_DisplayPort_2, &QPushButton::clicked, this, [=]() {this->command(5, "P1",this->ui->P1_DisplayPort_2); });
    QObject::connect(this->ui->P1_SDI_1, &QPushButton::clicked, this, [=]() {this->command(6, "P1",this->ui->P1_SDI_1); });
    QObject::connect(this->ui->P1_SDI_2, &QPushButton::clicked, this, [=]() {this->command(7, "P1",this->ui->P1_SDI_2); });
    QObject::connect(this->ui->P1_SDI_3, &QPushButton::clicked, this, [=]() {this->command(8, "P1",this->ui->P1_SDI_3); });
    QObject::connect(this->ui->P1_SDI_4, &QPushButton::clicked, this, [=]() {this->command(9, "P1",this->ui->P1_SDI_4); });
    connect(ui->sl_brightness_1, &QSlider::valueChanged, this, [=](){this->changeBrightness(1);});
    Active_btn = ui->P1_HDMI_Button_1;

    //++++++++++++++++++++++++++++++++++++++++++++++OPERATOR     projecotr 2++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
    QObject::connect(this->ui->P2_HDMI_Button_1, &QPushButton::clicked, this, [=]() {this->command(1, "P2",this->ui->P2_HDMI_Button_1); });
    QObject::connect(this->ui->P2_HDMI_Button_2, &QPushButton::clicked, this, [=]() {this->command(2, "P2",this->ui->P2_HDMI_Button_2); });
    QObject::connect(this->ui->P2_HDBaseT, &QPushButton::clicked, this, [=](){ this->command(3, "P2",this->ui->P2_HDBaseT); });
    QObject::connect(this->ui->P2_DisplayPort_1, &QPushButton::clicked, this, [=]() {this->command(4, "P2",this->ui->P2_DisplayPort_1); });
    QObject::connect(this->ui->P2_DisplayPort_2, &QPushButton::clicked, this, [=]() {this->command(5, "P2",this->ui->P2_DisplayPort_2); });
    QObject::connect(this->ui->P2_SDI_1, &QPushButton::clicked, this, [=]() {this->command(6, "P2",this->ui->P2_SDI_1); });
    QObject::connect(this->ui->P2_SDI_1, &QPushButton::clicked, this, [=]() {this->command(7, "P2",this->ui->P2_SDI_2); });
    QObject::connect(this->ui->P2_SDI_1, &QPushButton::clicked, this, [=]() {this->command(8, "P2",this->ui->P2_SDI_3); });
    QObject::connect(this->ui->P2_SDI_1, &QPushButton::clicked, this, [=]() {this->command(9, "P2",this->ui->P2_SDI_4); });
    connect(ui->sl_brightness_2, &QSlider::valueChanged, this, [=](){this->changeBrightness(2);});

    //++++++++++++++++++++++++++++++++++++++++++++++ADMIN     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P1_Admin_HDMI_Button_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_Admin_HDMI_Button_1); });
    QObject::connect(this->ui->P1_Admin_HDMI_Button_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_HDMI_Button_2, this->ui->P1_Admin_HDMI_Button_2); });
    QObject::connect(this->ui->P1_Admin_DisplayPort_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_DisplayPort_1, this->ui->P1_Admin_DisplayPort_1); });
    QObject::connect(this->ui->P1_Admin_DisplayPort_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_DisplayPort_2, this->ui->P1_Admin_DisplayPort_2); });
    QObject::connect(this->ui->P1_Admin_HDBaseT, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_HDBaseT, this->ui->P1_Admin_HDBaseT); });
    QObject::connect(this->ui->P1_Admin_SDI_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_SDI_1, this->ui->P1_Admin_SDI_1); });
    QObject::connect(this->ui->P1_Admin_SDI_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_SDI_2, this->ui->P1_Admin_SDI_2); });
    QObject::connect(this->ui->P1_Admin_SDI_3, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_SDI_3, this->ui->P1_Admin_SDI_3); });
    QObject::connect(this->ui->P1_Admin_SDI_4, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_SDI_4, this->ui->P1_Admin_SDI_4); });

    //++++++++++++++++++++++++++++++++++++++++++++++ADMIN     projecotr 2++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P2_Admin_HDMI_Button_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_HDMI_Button_1, this->ui->P2_Admin_HDMI_Button_1); });
    QObject::connect(this->ui->P2_Admin_HDMI_Button_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_HDMI_Button_2, this->ui->P2_Admin_HDMI_Button_2); });
    QObject::connect(this->ui->P2_Admin_DisplayPort_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_DisplayPort_1, this->ui->P2_Admin_DisplayPort_1); });
    QObject::connect(this->ui->P2_Admin_DisplayPort_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_DisplayPort_2, this->ui->P2_Admin_DisplayPort_2); });
    QObject::connect(this->ui->P2_Admin_HDBaseT, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_HDBaseT, this->ui->P2_Admin_HDBaseT); });
    QObject::connect(this->ui->P2_Admin_SDI_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_SDI_1, this->ui->P2_Admin_SDI_1); });
    QObject::connect(this->ui->P2_Admin_SDI_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_SDI_2, this->ui->P2_Admin_SDI_2); });
    QObject::connect(this->ui->P2_Admin_SDI_3, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_SDI_3, this->ui->P2_Admin_SDI_3); });
    QObject::connect(this->ui->P2_Admin_SDI_4, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_SDI_4, this->ui->P2_Admin_SDI_4); });



    Active_btn2 = ui->P2_HDMI_Button_1;
    ui->lbl_brightness_1_val_1->setText("50");
    ui->lbl_brightness_1_val_2->setText("50");
}

MainWindow::~MainWindow()
{

    if (tcpSocket_1->isOpen())
        tcpSocket_1->close();
    if (tcpSocket_2->isOpen())
        tcpSocket_2->close();
    connectThread->kill = true;

    delete this->Active_btn;
    delete this->Active_btn2;
    delete this->ui;
    delete this->custom_style;
    // delete Disable_btn;
}

void MainWindow::changeColorInActive(QPushButton *_btn, QString prt)
{
    if (prt == "P1" && tcpSocket_1->isOpen())
    {
        if (Active_btn->isEnabled())
            Active_btn->setStyleSheet(this->custom_style->Orange);
        _btn->setStyleSheet(this->custom_style->Green);
        Active_btn = _btn;
    }
    else if (tcpSocket_2->isOpen())
    {
        if (Active_btn2->isEnabled())
            Active_btn2->setStyleSheet(this->custom_style->Orange);
        _btn->setStyleSheet(this->custom_style->Green);
        Active_btn2 = _btn;
    }
}

void MainWindow::changeBrightness(int remote)
{
    QChar fillChar = u'0';
    int val = (remote==1)?ui->sl_brightness_1->value():ui->sl_brightness_2->value();
    QString hexvalue = tr("%1").arg(val, 4, 16, fillChar).toUpper();
    bool ok;
    QString lowDigits = hexvalue.last(2);
    QString highDigits = hexvalue.first(2);

    auto cks_int = 279; // La somme entière des premiers bits
    cks_int = cks_int + lowDigits.toInt(&ok, 16) + highDigits.toInt(&ok, 16);

    QString cks = tr("%1").arg(cks_int, 2, 16, fillChar).toUpper();
    cks = cks.last(2);
    // On fait la requete pour changer la luminosité
    active_commandData = "0x03 0x10 0x00 0x00 0x05 0x00 0xFF 0x00 0x" + lowDigits + " 0x" + highDigits + " 0x" + cks;
    if(remote == 1){
        ui->lbl_brightness_1_val_1->setText(QString::number(val));
        if(tcpSocket_1->isOpen())
        {
            // On envoie la commande
            byteArray = active_commandData.toUtf8();
            socketStream_1 << byteArray;
        }
    }else{
        ui->lbl_brightness_1_val_2->setText(QString::number(val));
        if(tcpSocket_2->isOpen())
        {
            // On envoie la commande
            byteArray = active_commandData.toUtf8();
            socketStream_2 << byteArray;
        }
    }
}

void MainWindow::onOff(int prt, QPushButton *button)
{
    QString color;
    if (tcpSocket_1->isOpen())
    {
        if (powerState_1)
        {
            powerState_1 = false;
            active_commandData = "0x02 0x01 0x00 0x00 0x00 0x03"; // On éteint
            color = this->custom_style->Off;
        }
        else
        {
            powerState_1 = true;
            active_commandData = "0x02 0x00 0x00 0x00 0x00 0x02"; // On allume
            color = this->custom_style->On;
        }
        // On envoie la commande
        if (prt == 1 && tcpSocket_1->isOpen())
        {
            button->setStyleSheet(color);
            byteArray = active_commandData.toUtf8();
            socketStream_1 << byteArray;
        }
        else if (prt == 2 && tcpSocket_2->isOpen())
        {
            button->setStyleSheet(color);
            byteArray = active_commandData.toUtf8();
            socketStream_2 << byteArray;
        }
    }
}
/*method to send projector command for a clicked button*/
void MainWindow::command(int btn_id, QString prt,QPushButton *btn)
{
    switch (btn_id)
    {
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
    if(prt == "P1" && is_connected_1 && tcpSocket_1->isOpen() ){

        changeColorInActive(btn,"P1");
        // send the command
        byteArray = active_commandData.toUtf8();
        socketStream_1 << byteArray;
    }else if(is_connected_2 && tcpSocket_2->isOpen()){

            changeColorInActive(btn,"P2");
            //  send the command
            byteArray = active_commandData.toUtf8();
            socketStream_2 << byteArray;
        }
}

void MainWindow::connected_1()
{
    ui->lbl_is_connected_1->setText("Connected");
    ui->lbl_is_connected_1->setStyleSheet("color:green; font-size:15px;");
    is_connected_1 = true;
    this->ui->sl_brightness_1->setEnabled(true);
}

void MainWindow::disconnected_1()
{
    ui->lbl_is_connected_1->setText("Not Connected");
    this->ui->sl_brightness_1->setEnabled(false);
    ui->lbl_is_connected_1->setStyleSheet("color:red; font-size:15px;");
    is_connected_1 = false;
    connectThread->is_connected_1 = false;
     ui->sl_brightness_1->setEnabled(false);
}

void MainWindow::connected_2()
{
    ui->lbl_is_connected_2->setText("Connected");
    ui->lbl_is_connected_2->setStyleSheet("color:green; font-size:15px;");
    is_connected_2 = true;
    this->ui->sl_brightness_2->setEnabled(true);
}

void MainWindow::disconnected_2()
{
    ui->lbl_is_connected_2->setText("Not Connected");
    ui->lbl_is_connected_2->setStyleSheet("color:red; font-size:15px;");
    is_connected_2 = false;
    connectThread->is_connected_2 = false;
    this->ui->sl_brightness_2->setEnabled(false);
}

void MainWindow::onConnexionStatusChanged_1()
{
    tcpSocket_1->abort();
    tcpSocket_1->connectToHost(host_1, 7142);
    if (tcpSocket_1->waitForConnected())
    {
        is_connected_1 = true;
        powerState_1 = true;
        ui->lbl_is_connected_1->setText("Connected");
        this->ui->sl_brightness_1->setEnabled(true);
        ui->lbl_is_connected_1->setStyleSheet("color:green; font-size:15px;");
    }
    else
        this->ui->sl_brightness_1->setEnabled(false);
    connect(tcpSocket_1, &QTcpSocket::disconnected, this, &MainWindow::disconnected_1);
}

void MainWindow::onConnexionStatusChanged_2()
{
    tcpSocket_2->abort();
    tcpSocket_2->connectToHost(host_2, 7142);
    if (tcpSocket_2->waitForConnected())
    {
        is_connected_2 = true;
        powerState_2 = true;
        ui->lbl_is_connected_2->setText("Connected");
        ui->lbl_is_connected_2->setStyleSheet("color:green; font-size:15px;");
        this->ui->sl_brightness_2->setEnabled(true);
    }
    else
        this->ui->sl_brightness_2->setEnabled(false);
    connect(tcpSocket_2, &QTcpSocket::disconnected, this, &MainWindow::disconnected_2);
}

void MainWindow::BtnControl(QPushButton *btn, QPushButton *selfbtn)
{
    if (btn->isEnabled())
    {
        btn->setEnabled(false);
        btn->setStyleSheet(this->custom_style->Gray);
        selfbtn->setStyleSheet(this->custom_style->Gray);
    }
    else
    {
        btn->setEnabled(true);
        btn->setStyleSheet(this->custom_style->Orange);
        selfbtn->setStyleSheet(this->custom_style->Orange);
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

void MainWindow::on_Admin_next_button_clicked()
{

    QString password = ui->password_lineEdit->text();
    if (password.toInt() == this->password)
    {

        this->ui->stackedWidget->setCurrentIndex(3);
        this->ui->password_lineEdit->setText("");
    }
    else{
        this->ui->incorrect_password->setText("Incorrect password!");
        this->ui->password_lineEdit->setText("");
    }
}

void MainWindow::on_SaveChangesButton_clicked()
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



void MainWindow::on_password_lineEdit_cursorPositionChanged()
{

    if (this->ui->password_lineEdit->text().size() > 0)
        this->ui->password_lineEdit->setStyleSheet(this->custom_style->border);
    else{
        this->ui->password_lineEdit->setStyleSheet(this->custom_style->rm_border);
        this->ui->incorrect_password->setText("");
    }
}
