#include "mainwindow.h"
#include <QValidator>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QShortcut>
#include <QHBoxLayout>
#include <QThread>
#include <QSlider>
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
    passwords = "7777";
    if (f.exists())
    {
        if (f.open(QIODevice::ReadOnly))
        {
            QTextStream in{&f};
            if (!in.atEnd())
            {
                allDataFile = in.readLine();
                QStringList allDataFile_split = allDataFile.split('-');
                passwords = allDataFile_split[0];
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
    }
    else
    {
        is_connected_1 = false;
        powerState_1 = false;
        ui->lbl_is_connected_1->setText("Not Connected");
        ui->lbl_is_connected_1->setStyleSheet("color:red; font-size:15px;");
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
    }
    else
    {
        is_connected_2 = false;
        powerState_2 = false;
        ui->lbl_is_connected_2->setText("Not Connected");
        ui->lbl_is_connected_2->setStyleSheet("color:red; font-size:15px;");
    }
    connect(tcpSocket_2, &QTcpSocket::disconnected, this, &MainWindow::disconnected_2);

    socketStream_1.setDevice(tcpSocket_1);
    socketStream_1.setVersion(QDataStream::Qt_6_4);
    socketStream_2.setDevice(tcpSocket_2);
    socketStream_2.setVersion(QDataStream::Qt_6_4);

    connectThread = new ConnectThread(this, is_connected_1, is_connected_2, host_1, host_2);
    connectThread->start();
    connect(connectThread, &ConnectThread::connexionStatusChanged_1, this, &MainWindow::onConnexionStatusChanged_1);
    connect(connectThread, &ConnectThread::connexionStatusChanged_2, this, &MainWindow::onConnexionStatusChanged_2);

    //++++++++++++++++++++++++++++++++++++++++++++++OPERATOR     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P1_HDMI_Button_1, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, "P1" ); this->command(1, "P1"); });
    QObject::connect(this->ui->P1_HDMI_Button_2, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_HDMI_Button_2, this->ui->P1_HDMI_label_2, "P1" ); this->command(2, "P1"); });
    QObject::connect(this->ui->P1_DisplayPort_1, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_DisplayPort_1, this->ui->P1_DisplayPort_label_1, "P1" );this->command(3,   "P1"); });
    QObject::connect(this->ui->P1_DisplayPort_2, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_DisplayPort_2, this->ui->P1_DisplayPort_label_2, "P1" ); this->command(4,  "P1"); });
    QObject::connect(this->ui->P1_HDBaseT, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_HDBaseT, this->ui->P1_HDBaseT_label, "P1" ); this->command(5,  "P1"); });
    QObject::connect(this->ui->P1_SDI_1, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_SDI_1, this->ui->P1_SDI_label_1, "P1" ); this->command(6,  "P1"); });
    QObject::connect(this->ui->P1_SDI_2, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_SDI_2, this->ui->P1_SDI_label_2, "P1" ); this->command(7,  "P1"); });
    QObject::connect(this->ui->P1_SDI_3, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_SDI_3, this->ui->P1_SDI_label_3, "P1" ); this->command(8,  "P1"); });
    QObject::connect(this->ui->P1_SDI_4, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P1_SDI_4, this->ui->P1_SDI_label_4, "P1" ); this->command(9,  "P1"); });
    QObject::connect(this->ui->sl_brightness_1, &QSlider::valueChanged, this, [=]()
                     { this->changeBrightness(1); });
    Active_btn = ui->P1_HDMI_Button_1;
    btn_label = ui->P1_HDMI_label_1;

    //++++++++++++++++++++++++++++++++++++++++++++++OPERATOR     projecotr 2++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P2_HDMI_Button_1, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_HDMI_Button_1, this->ui->P2_HDMI_label_1,  "P2"); this->command(1, "P2"); });
    QObject::connect(this->ui->P2_HDMI_Button_2, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_HDMI_Button_2, this->ui->P2_HDMI_label_2, "P2"); this->command(2, "P2"); });
    QObject::connect(this->ui->P2_HDBaseT, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_HDBaseT, this->ui->P2_HDBaseT_label, "P2"); this->command(3, "P2"); });
    QObject::connect(this->ui->P2_DisplayPort_1, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_DisplayPort_1, this->ui->P2_DisplayPort_label_1, "P2"); this->command(4, "P2"); });
    QObject::connect(this->ui->P2_DisplayPort_2, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_DisplayPort_2, this->ui->P2_DisplayPort_label_2, "P2"); this->command(5, "P2"); });
    QObject::connect(this->ui->P2_SDI_1, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_SDI_1, this->ui->P2_SDI_label_1, "P2"); this->command(6, "P2"); });
    QObject::connect(this->ui->P2_SDI_2, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_SDI_2, this->ui->P2_SDI_label_2, "P2"); this->command(7, "P2"); });
    QObject::connect(this->ui->P2_SDI_3, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_SDI_3, this->ui->P2_SDI_label_3, "P2"); this->command(8, "P2"); });
    QObject::connect(this->ui->P2_SDI_4, &QPushButton::clicked, this, [=]()
                     {this->changeColorInActive(this->ui->P2_SDI_4, this->ui->P2_SDI_label_4, "P2"); this->command(9, "P2"); });
    QObject::connect(this->ui->sl_brightness_2, &QSlider::valueChanged, this, [=]()
                     { this->changeBrightness(2); });

    //++++++++++++++++++++++++++++++++++++++++++++++ADMIN     projecotr 1++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P1_Admin_HDMI_Button_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_HDMI_Button_1, this->ui->P1_HDMI_label_1, this->ui->P1_Admin_HDMI_label_1); });
    QObject::connect(this->ui->P1_Admin_HDMI_Button_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_HDMI_Button_2, this->ui->P1_HDMI_label_2, this->ui->P1_Admin_HDMI_label_2); });
    QObject::connect(this->ui->P1_Admin_DisplayPort_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_DisplayPort_1, this->ui->P1_DisplayPort_label_1, this->ui->P1_Admin_DisplayPort_label_1); });
    QObject::connect(this->ui->P1_Admin_DisplayPort_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_DisplayPort_2, this->ui->P1_DisplayPort_label_2, this->ui->P1_Admin_DisplayPort_label_2); });
    QObject::connect(this->ui->P1_Admin_HDBaseT, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_HDBaseT, this->ui->P1_HDBaseT_label, this->ui->P1_Admin_HDBaseT_label); });
    QObject::connect(this->ui->P1_Admin_SDI_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_SDI_1, this->ui->P1_SDI_label_1, this->ui->P1_Admin_SDI_label_1); });
    QObject::connect(this->ui->P1_Admin_SDI_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_SDI_2, this->ui->P1_SDI_label_2, this->ui->P1_Admin_SDI_label_2); });
    QObject::connect(this->ui->P1_Admin_SDI_3, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_SDI_3, this->ui->P1_SDI_label_3, this->ui->P1_Admin_SDI_label_3); });
    QObject::connect(this->ui->P1_Admin_SDI_4, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P1_SDI_4, this->ui->P1_SDI_label_4, this->ui->P1_Admin_SDI_label_4); });

    //++++++++++++++++++++++++++++++++++++++++++++++ADMIN     projecotr 2++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

    QObject::connect(this->ui->P2_Admin_HDMI_Button_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_HDMI_Button_1, this->ui->P2_HDMI_label_1, this->ui->P2_Admin_HDMI_label_1); });
    QObject::connect(this->ui->P2_Admin_HDMI_Button_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_HDMI_Button_2, this->ui->P2_HDMI_label_2, this->ui->P2_Admin_HDMI_label_2); });
    QObject::connect(this->ui->P2_Admin_DisplayPort_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_DisplayPort_1, this->ui->P2_DisplayPort_label_1, this->ui->P2_Admin_DisplayPort_label_1); });
    QObject::connect(this->ui->P2_Admin_DisplayPort_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_DisplayPort_2, this->ui->P2_DisplayPort_label_2, this->ui->P2_Admin_DisplayPort_label_2); });
    QObject::connect(this->ui->P2_Admin_HDBaseT, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_HDBaseT, this->ui->P2_HDBaseT_label, this->ui->P2_Admin_HDBaseT_label); });
    QObject::connect(this->ui->P2_Admin_SDI_1, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_SDI_1, this->ui->P2_SDI_label_1, this->ui->P2_Admin_SDI_label_1); });
    QObject::connect(this->ui->P2_Admin_SDI_2, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_SDI_2, this->ui->P2_SDI_label_2, this->ui->P2_Admin_SDI_label_2); });
    QObject::connect(this->ui->P2_Admin_SDI_3, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_SDI_3, this->ui->P2_SDI_label_3, this->ui->P2_Admin_SDI_label_3); });
    QObject::connect(this->ui->P2_Admin_SDI_4, &QPushButton::clicked, this, [=]()
                     { this->BtnControl(this->ui->P2_SDI_4, this->ui->P2_SDI_label_4, this->ui->P2_Admin_SDI_label_4); });

    Active_btn2 = ui->P2_HDMI_Button_1;
    btn_label2 = ui->P2_HDMI_label_1;
}

MainWindow::~MainWindow()
{
    if (tcpSocket_1->isOpen())
        tcpSocket_1->close();
    if (tcpSocket_2->isOpen())
        tcpSocket_2->close();

    connectThread->kill = true;

    delete this->Active_btn;
    delete this->btn_label;
    delete this->Active_btn2;
    delete this->btn_label2;
    delete this->ui;
    delete this->custom_style;
    // delete Disable_btn;
}

void MainWindow::changeColorInActive(QPushButton *_btn, QLabel *lab, QString prt)
{
    if (prt == "P1")
    {
        if (Active_btn->isEnabled())
            btn_label->setStyleSheet(this->custom_style->Orange);
        btn_label = lab;
        btn_label->setStyleSheet(this->custom_style->Green);
        Active_btn = _btn;
    }
    else
    {
        if (Active_btn2->isEnabled())
            btn_label2->setStyleSheet(this->custom_style->Orange);
        btn_label2 = lab;
        btn_label2->setStyleSheet(this->custom_style->Green);
        Active_btn2 = _btn;
    }
}

void MainWindow::changeBrightness(int pr)
{
    if (pr == 1)
    {
        int val = ui->sl_brightness_1->value();
        ui->lbl_brightness_1_val->setText(QString::number(val));
        QChar fillChar = u'0';
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
        if (tcpSocket_1->isOpen())
        {

            byteArray = active_commandData.toUtf8();
            socketStream << byteArray;
        }
    }
    else
    {
        if (tcpSocket_2->isOpen())
        {
            int val = ui->sl_brightness_2->value();
            ui->lbl_brightness_1_val_2->setText(QString::number(val));
            QChar fillChar = u'0';
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

            byteArray = active_commandData.toUtf8();
            socketStream_1 << byteArray;
        }
    }
}

void MainWindow::onOff_1()
{
    if (tcpSocket_1->isOpen())
    {
        if (powerState_1)
        {
            powerState_1 = false;
            active_commandData = "0x02 0x01 0x00 0x00 0x00 0x03"; // On éteint
        }
        else
        {
            powerState_1 = true;
            active_commandData = "0x02 0x00 0x00 0x00 0x00 0x02"; // On allume
        }
        // On envoie la commande
        byteArray_1 = active_commandData.toUtf8();
        socketStream_1 << byteArray_1;
    }
}

void MainWindow::connected_1()
{
    ui->lbl_is_connected_1->setText("Connected");
    ui->lbl_is_connected_1->setStyleSheet("color:green; font-size:15px;");
    is_connected_1 = true;
}

void MainWindow::disconnected_1()
{
    ui->lbl_is_connected_1->setText("Not Connected");
    ui->lbl_is_connected_1->setStyleSheet("color:red; font-size:15px;");
    is_connected_1 = false;
    connectThread->is_connected_1 = false;
}

void MainWindow::connected_2()
{
    ui->lbl_is_connected_2->setText("Connected");
    ui->lbl_is_connected_2->setStyleSheet("color:green; font-size:15px;");
    is_connected_2 = true;
}

void MainWindow::disconnected_2()
{
    ui->lbl_is_connected_2->setText("Not Connected");
    ui->lbl_is_connected_2->setStyleSheet("color:red; font-size:15px;");
    is_connected_2 = false;
    connectThread->is_connected_2 = false;
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
        ui->lbl_is_connected_1->setStyleSheet("color:green; font-size:15px;");
    }
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
    }
    connect(tcpSocket_2, &QTcpSocket::disconnected, this, &MainWindow::disconnected_2);
}

void MainWindow::BtnControl(QPushButton *btn, QLabel *label, QLabel *Selflabel)
{
    if (btn->isEnabled())
    {
        btn->setEnabled(false);
        label->setStyleSheet(this->custom_style->Gray);
        Selflabel->setStyleSheet(this->custom_style->Gray);
    }
    else
    {
        btn->setEnabled(true);
        label->setStyleSheet(this->custom_style->Orange);
        Selflabel->setStyleSheet(this->custom_style->Orange);
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
    if (password.toInt() == this->password)
    {

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
void MainWindow::command(int btn_id, QString prt)
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
    if (prt == "P1")
    {
        // On envoie la commande
        byteArray = active_commandData.toUtf8();
        socketStream_1 << byteArray;
    }
    else
    {
        // On envoie la commande
        byteArray = active_commandData.toUtf8();
        socketStream_2 << byteArray;
    }
}

void MainWindow::on_password_lineEdit_cursorPositionChanged()
{

    if (this->ui->password_lineEdit->text().size() > 0)
        this->ui->password_lineEdit->setStyleSheet(this->custom_style->border);
    else
        this->ui->password_lineEdit->setStyleSheet(this->custom_style->rm_border);
    this->ui->incorrect_password->setText("");
}

