#include "usercreator.h"
#include "ui_usercreator.h"
#include "user.h"
#include <QMessageBox>
#include <array>
#include <QLineEdit>
#include "user.h"
#include "userhandler.h"

UserCreator::UserCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserCreator)
{
    ui->setupUi(this);
    ui->id_le->setPlaceholderText(tr("请输入字母加数字组合，不要使用中文空格以及特殊符号"));
    ui->pwd_le->setPlaceholderText(tr("请输入字母加数字组合，不要使用中文空格以及特殊符号"));
    ui->pwd_le->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    ui->rePwd_le->setEchoMode(QLineEdit::PasswordEchoOnEdit);
}

UserCreator::~UserCreator()
{
    delete ui;
}

void UserCreator::on_pushButton_clicked()
{
    UserHandler uh;
    if (ui->pwd_le->text() == ui->rePwd_le->text()) {
        QString &&id = ui->id_le->text();
        QString &&pwd = ui->pwd_le->text();
        QString &&name = ui->name_le->text();
        QString &&tel = ui->tel_le->text();
        std::array<bool, 5> privilege = {
                                         ui->head_cb->isChecked(),
                                         ui->dent_cb->isChecked(),
                                         ui->face_cb->isChecked(),
                                         ui->anim_cb->isChecked(),
                                         ui->prod_cb->isChecked()
                                        };
        User user(id, pwd, name, tel, privilege);
        bool res = uh.insertUser(user);
        if(!res){
            QMessageBox::critical(this, "用户创建", "创建失败");
        } else
            this->close();
    } else {
        QMessageBox::critical(this, "用户创建", "两次密码输入不一样，请重新输入");
        ui->pwd_le->setText("");
        ui->rePwd_le->setText("");
    }
}
