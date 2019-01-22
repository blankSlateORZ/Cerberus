#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
    _id = "";
    _pwd = "";
}

Server::Server(QString id, QString pwd) :
    _id(id),
    _pwd(pwd)
{

}

Server::~Server()
{
    delete ui;
}
