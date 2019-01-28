#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lw1_patient_data_currentRowChanged(int currentRow)
{
    ui->sw1_patient_funicton->setCurrentIndex(currentRow);
}

void MainWindow::on_pushButton_clicked()
{
    ui->swm_function->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->swm_function->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->swm_function->setCurrentIndex(2);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->swm_function->setCurrentIndex(3);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->swm_function->setCurrentIndex(4);
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->swm_function->setCurrentIndex(5);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->swm_function->setCurrentIndex(6);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->swm_function->setCurrentIndex(7);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->swm_function->setCurrentIndex(8);
}
