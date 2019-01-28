#include "insertpatient.h"
#include "ui_insertpatient.h"

InsertPatient::InsertPatient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InsertPatient)
{
    ui->setupUi(this);
}

InsertPatient::~InsertPatient()
{
    delete ui;
}
