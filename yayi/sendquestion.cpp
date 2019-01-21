#include "sendquestion.h"
#include "ui_sendquestion.h"

sendquestion::sendquestion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sendquestion)
{
    ui->setupUi(this);
}

sendquestion::~sendquestion()
{
    delete ui;
}
