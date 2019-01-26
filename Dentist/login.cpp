#include "login.h"
#include "ui_login.h"
#include <QHostAddress>
#include <QFile>
#include <QDebug>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    memset(&_memo, 0, sizeof _memo);

    QFile readFile("account.dat");
    if(!readFile.open(QIODevice::ReadOnly)){
        qDebug() << "open file failed";
    } else {
        QDataStream in(&readFile);
        in.readRawData(reinterpret_cast<char *>(&_memo), sizeof _memo);
        readFile.close();
    }
    //radio button base on flag
    ui->remmPwd_rb->setChecked(_memo.flag);

    _clientSocket = new QTcpSocket(this);
    _clientSocket->connectToHost(QHostAddress::LocalHost, 10000);
    connect(this->_clientSocket, SIGNAL(readyRead()),
            this, SLOT(readyReadSlot()));
}

login::~login()
{
    delete ui;
    delete _clientSocket;
}

void login::closeEvent(QCloseEvent *event)
{
    if(_memo.flag) {
        QFile writeFile("account.dat");
        writeFile.open(QIODevice::WriteOnly);
        QDataStream out(&writeFile);
        out.writeRawData(reinterpret_cast<char *>(&_memo), sizeof _memo);
        writeFile.close();
    }
    event->accept();
}

void login::on_login_pb_clicked()
{
    //get line edit text
    QString &&qId = ui->id_le->text();
    QString &&qPwd = ui->pwd_le->text();

    //create a package
    package packLog;
    memset(&packLog, 0, sizeof packLog);

    //write a package to login
    packLog.type = TYPE_LOGIN;

    const char *cId = qId.toLocal8Bit().data();
    const char *cPwd = qPwd.toLocal8Bit().data();

    //strcpy to package
    qstrcpy(packLog.id, cId);
    qstrcpy(packLog.pwd, cPwd);

    //write to server
    _clientSocket->write(reinterpret_cast<const char *>(&packLog), sizeof packLog);
}

void login::readyReadSlot()
{

}

void login::on_remmPwd_rb_clicked()
{
    _memo.flag = ui->remmPwd_rb->isChecked();
    _memo.id = ui->id_le->text();
    _memo.pwd = ui->pwd_le->text();
}
