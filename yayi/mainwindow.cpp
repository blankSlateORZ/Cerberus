#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QThread>
#include <QSqlDatabase>
#include <QMessageBox>
#include <string.h>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui2 = new MainWindow2;
    ui2->show();
    question = new sendquestion;
    question->hide();
    repass = new repassword;
    repass->hide();

    db= QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");             //127.0.0.1也是一样的,属于本地地址
    db.setUserName("root");              //登陆MYSQL的用户名
    db.setPassword("123456");              //你自己登陆的密码
    db.setDatabaseName("yayi");          //登陆数据库的名称
    db.open();
    QSqlQuery query;
    query.prepare("select name, password from user where flag = 1 order by nowdate");
    bool ret = query.exec();
    query.next();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PBlogin_clicked()
{
    QString name = ui->username->text();
    QString pass = ui->password->text();
    db.open();
    QSqlQuery query;
    query.prepare("select name, password from user "
                  " where name = :name and password = :pwd");
    query.bindValue(":name", name);
    query.bindValue(":pwd", pass);

    bool ret = query.exec();
    if(!ret){
        qDebug() << query.lastError().text();
    }

    //检测结果集是否存在记录
    ret = query.next();
    if(!ret){
        QMessageBox::about(NULL, "waring", "登陆失败");
        qDebug() << query.lastError().text();
    }
    else{
        QMessageBox::about(NULL, "well", "登陆成功");
        query.prepare("update user set flag = :flag,nowdate = now() where name = :name");
        query.bindValue(":flag", flag);
        query.bindValue(":name", name);
        query.exec();
        ui2->show();
        this->hide();
    }
    db.close();
}

void MainWindow::on_PBregiste_clicked()
{
    QString name = ui->username->text();
    QString pass = ui->password->text();
    db.open();
    QSqlQuery query;
    query.prepare("insert into user(name, passward) "
                  " values(:name, :pwd)");
    query.bindValue(":name", name);
    query.bindValue(":pwd", pass);

    bool ret = query.exec();
    if(!ret){
        QMessageBox::about(NULL, "waring", "注册失败");
        qDebug() << query.lastError().text();
    }
    else{
        QMessageBox::about(NULL, "well", "注册成功");
    }

    db.close();
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1==2)
    {
        flag = 1;
    }
    if(arg1==0)
    {
        flag = 0;
    }
}

void MainWindow::on_PBforget_clicked()
{
    QString name = ui->username->text();
    if(name.length() == 0){
        QMessageBox::about(NULL, "sorry", "用户名不能为空");
    }
    else{
        repass->show();
    }
}

void MainWindow::on_pushButton_clicked()
{
    question->show();
}
