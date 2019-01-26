#include "usercreator.h"
#include "ui_usercreator.h"
#include "user.h"
#include <QMessageBox>
#include <array>
#include <memory>
UserCreator::UserCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserCreator)
{
    ui->setupUi(this);
    ui->id_le->setPlaceholderText(tr("请输入字母加数字组合，不要使用中文空格以及特殊符号"));
    ui->pwd_le->setPlaceholderText(tr("请输入字母加数字组合，不要使用中文空格以及特殊符号"));
}

UserCreator::~UserCreator()
{
    delete ui;
}

void UserCreator::on_pushButton_clicked()
{
    std::shared_ptr<DbHelper> instance = DbHelper::getInstance();
    bool power = false;
    if (ui->pwd_le->text() == ui->rePwd_le->text()) {
        QString &&id = ui->id_le->text();
        QString &&pwd = ui->pwd_le->text();
        QString &&name = ui->name_le->text();
        QString &&tel = ui->tel_le->text();
        std::array<bool, 5> privilege = {ui->head_rb->isChecked(),
                                         ui->dent_rb->isChecked(),
                                         ui->face_rb->isChecked(),
                                         ui->anim_rb->isChecked(),
                                         ui->prod_rb->isChecked()
                                        };

        bool res =instance.get()->create(id, pwd, name, tel, privilege,power);
        if(!res){
            QMessageBox::critical(this, "用户创建", "创建失败");
        }
        //insert in database...
        this->close();
    } else {
        QMessageBox::critical(this, "用户创建", "两次密码输入不一样，请重新输入");
        ui->pwd_le->setText("");
        ui->rePwd_le->setText("");
    }
}
