#include "helper.h"
#include "ui_helper.h"
#include <QMessageBox>
#include "user.h"
#include "userhandler.h"

Helper::Helper(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Helper)
{
    ui->setupUi(this);
    ui->id_le->setPlaceholderText(tr("请输入字母加数字组合，不要使用中文空格以及特殊符号"));
    ui->pwd_le->setPlaceholderText(tr("请输入字母加数字组合，不要使用中文空格以及特殊符号"));
    ui->pwd_le->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ui->rePwd_le->setEchoMode(QLineEdit::PasswordEchoOnEdit);
}

Helper::~Helper()
{
    delete ui;
}

void Helper::on_pushButton_clicked()
{
    if (ui->pwd_le->text() == ui->rePwd_le->text()) {
        QString &&id = ui->id_le->text();
        QString &&pwd = ui->pwd_le->text();
        QString &&name = ui->name_le->text();
        QString &&tel = ui->tel_le->text();
        std::array<bool, 5> privilege{true, true, true, true, true};
        User user(id, pwd, name, tel, privilege, true);

        UserHandler uh;
        bool &&res = uh.insertUser(user);
        if(!res){
            QMessageBox::critical(this, "管理员创建", "创建失败");
        } else {
            QMessageBox::information(this, "管理员创建", "创建成功");
            this->close();
        }
    } else {
        QMessageBox::critical(this, "管理员创建", "两次密码输入不一样");
        ui->pwd_le->setText("");
        ui->rePwd_le->setText("");
    }
}
