#include "usercreator.h"
#include "ui_usercreator.h"

UserCreator::UserCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserCreator)
{
    ui->setupUi(this);
}

UserCreator::~UserCreator()
{
    delete ui;
}
