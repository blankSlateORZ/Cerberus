#include "repassword.h"
#include "ui_repassword.h"

repassword::repassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::repassword)
{
    ui->setupUi(this);
}

repassword::~repassword()
{
    delete ui;
}
