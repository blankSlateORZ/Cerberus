#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_login_pb_clicked()
{
    //get line edit test
    QString qId = ui->id_le->text();
    QString qPwd = ui->pwd_le->text();
    //create a package
    package packLog;
    memset(&packLog, 0, sizeof packLog);
    //write a package to login
    packLog.type = TYPE_LOGIN;

    //translate qstring to byte
    QByteArray id = qId.toLocal8Bit();
    QByteArray pwd = qPwd.toLocal8Bit();
    //then, translate to const char *
    const char *cId = id.data();
    const char *cPwd = pwd.data();
    //strcpy to package
    qstrcpy(packLog.id, cId);
    qstrcpy(packLog.pwd, cPwd);
    //write to server

}
