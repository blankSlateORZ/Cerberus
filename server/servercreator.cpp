#include "servercreator.h"
#include "ui_servercreator.h"

ServerCreator::ServerCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ServerCreator)
{
    ui->setupUi(this);
}

ServerCreator::~ServerCreator()
{
    delete ui;
}
