#include "insertpatient.h"
#include "ui_insertpatient.h"
#include <QDateTime>
#include <QDebug>
#include <string.h>
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

void InsertPatient::on_pushButton_clicked()
{
    ui->sw1_patient_funicton->setCurrentIndex(0);
}

void InsertPatient::on_pushButton_2_clicked()
{
    ui->sw1_patient_funicton->setCurrentIndex(1);
}

void InsertPatient::on_pb1_save_basis_clicked()
{
    package temp;
    temp.size = 0;
    temp.type = TYPE_PATIENT_BASIS;
    qDebug() << sex;
    QString name = ui->lineEdit_3->text();
    QString tel = ui->lineEdit_4->text();
    QString time = ui->lineEdit_5->text();
    QString add = ui->lineEdit_7->text();
    QString doctor = "doctor";
    QDateTime current = QDateTime::currentDateTime();
    QString first_time = current.toString("yyyy.MM.dd hh:mm:ss.zzz ddd");
    QString type_A = ui->comboBox->currentText();
    QString type_a = ui->comboBox_2->currentText();
    QString type_1 = ui->comboBox_3->currentText();
    QString total = sex+"/"+name+"/"+tel+"/"+time+"/"+add+"/"+doctor+"/"+first_time+"/"
            +doctor+"/"+first_time+"/"+type_A+type_a+type_1;
    strcpy(temp.message,total.toStdString().c_str());
    //_clicksocket.write(&temp,sizeof(temp));

}

void InsertPatient::on_calendarWidget_clicked(const QDate &date)
{
    QString time = date.toString("yyyy-MM-dd");
    ui->lineEdit_5->setText(time);
}

void InsertPatient::on_radioButton_36_clicked(bool checked)
{
    if(checked){
        sex = "男";
    }
}

void InsertPatient::on_radioButton_37_clicked(bool checked)
{
    if(checked){
        sex = "女";
    }
}
