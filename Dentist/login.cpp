#include "login.h"
#include "ui_login.h"
//#include <QHostAddress>
#include <QFile>
#include <QDebug>
#include <memory>
#include <QRegExp>
#include <QValidator>
#include "clienthandler.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->id_le->setMaxLength(19);
    ui->pwd_le->setMaxLength(19);
    QRegExp reg("[a-zA-Z0-9]+$");
    ui->id_le->setValidator(new QRegExpValidator(reg, this));
    ui->pwd_le->setValidator(new QRegExpValidator(reg, this));

    ui->pwd_le->setEchoMode(QLineEdit::Password);

    ui->login_pb->setShortcut(QKeySequence::InsertParagraphSeparator);
    ui->login_pb->setShortcut(Qt::Key_Enter);
    ui->login_pb->setShortcut(Qt::Key_Return);

    memset(&_memo, 0, sizeof _memo);

    QFile readFile("D:/repository/Dentist/account.dat");
    if(!readFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "open file failed";
    } else {
        QDataStream in(&readFile);
        in.readRawData(reinterpret_cast<char *>(&_memo), sizeof _memo);
        readFile.close();
    }
    qDebug() << _memo.flag;
    //radio button base on flag
    ui->remmPwd_rb->setChecked(_memo.flag);
    qDebug() << _memo.id <<_memo.pwd;
    if(ui->remmPwd_rb->isChecked()) {
        qDebug() << "checked";
        ui->id_le->setText(_memo.id);
        ui->pwd_le->setText(_memo.pwd);
    }
}

login::~login()
{
    delete ui;
}

void login::closeEvent(QCloseEvent *event)
{
    if(_memo.flag) {
        qDebug() << "write" << _memo.id << _memo.pwd;
        QFile writeFile("D:/repository/Dentist/account.dat");
        writeFile.open(QIODevice::WriteOnly | QIODevice::Text);
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
    std::shared_ptr<ClientHandler> instance = ClientHandler::getInstance();
    instance->writeToServer(packLog);
}

void login::on_remmPwd_rb_clicked()
{
    _memo.flag = ui->remmPwd_rb->isChecked();
    if(!_memo.flag) return;
    qstrcpy(_memo.id, ui->id_le->text().toLatin1().data());
    qstrcpy(_memo.pwd, ui->pwd_le->text().toLatin1().data());
}
