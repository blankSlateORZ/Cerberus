#include "helper.h"
#include "ui_helper.h"

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
    QString &&id = ui->id_le->text();
    QString &&pwd = ui->pwd_le->text();
    if(id.length() && pwd.length()) {
        server = new Server(id, pwd);
        this->hide();
        server->show();
    }
}
