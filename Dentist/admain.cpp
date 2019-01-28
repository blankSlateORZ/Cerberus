#include "admain.h"
#include "ui_admain.h"

admain::admain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admain)
{
    ui->setupUi(this);
}

admain::~admain()
{
    delete ui;
}

void admain::on_lw1_admin_currentRowChanged(int currentRow)
{
    ui->sw1_admin->setCurrentIndex(currentRow);
}
