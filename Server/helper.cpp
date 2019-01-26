#include "helper.h"
#include "ui_helper.h"
#include <QMessageBox>
Helper::Helper(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Helper)
{
    ui->setupUi(this);
}

Helper::~Helper()
{
    delete ui;
}

void Helper::on_pushButton_clicked()
{
//    QString &&id = ui->id_le->text();
//    QString &&pwd = ui->pwd_le->text();
//    if(id.length() && pwd.length()) {
//        server = new Server(id, pwd);
//        this->hide();
//        server->show();
//    }
    bool power = true;
    std::shared_ptr<DbHelper> instance = DbHelper::getInstance();
    if (ui->pwd_le->text() == ui->repwd_le->text()) {
        QString &&id = ui->id_le->text();
        QString &&pwd = ui->pwd_le->text();
        QString &&name = ui->name_le->text();
        QString &&tel = ui->tel_le->text();

        std::array<bool, 5> privilege{true,true,true,true,true};
        bool res =instance.get()->create(id, pwd, name, tel, privilege,power);
        if(!res){
            QMessageBox::critical(this, "用户创建", "创建失败");
        }
    }
}
