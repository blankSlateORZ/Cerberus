#include "login.h"
#include "ui_login.h"
#include "dbhelper.h"
#include "user.h"
#include "userhandler.h"
#include <QString>
#include <QMessageBox>
#include "userlist.h"
#include <memory>
#include <QLineEdit>
Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->admin_pwd_le->setEchoMode(QLineEdit::Password);
    _register = new Helper();
}

Login::~Login()
{
    delete ui;
    delete _register;
    if(_server)
        delete _server;
}

void Login::on_register_pb_clicked()
{
    _register->show();
}

void Login::on_login_pb_clicked()
{
    std::shared_ptr<UserList> instance = UserList::getInstance();

    QString &&id = ui->admin_id_le->text();
    QString &&pwd = ui->admin_pwd_le->text();
    if (id.size() && pwd.size()) {
        //防止重复登录
        if(instance->isContain(id)) {
            QMessageBox::critical(this, "管理员登录", "请勿多次登录");
            return;
        }
        UserHandler uh;
        User user(id, pwd);

        if(uh.checkUser(user)) {
            instance->insertUserToList(id, pwd);
            _server = new Server(id, pwd);
            _server->show();
            this->close();
        } else {
            QMessageBox::critical(this, "管理员登录", "账户或密码错误！");
        }
    } else {
        QMessageBox::critical(this, "管理员登录", "请输入账号和密码");
    }
}
