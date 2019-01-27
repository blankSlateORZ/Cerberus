#include "server.h"
#include "ui_server.h"
#include <QHostAddress>
#include <memory>
#include <QThread>
#include <QDebug>

using namespace std;

Server::Server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
}

Server::Server(QString id, QString pwd, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Server),
    _id(id),
    _pwd(pwd)
{
    ui->setupUi(this);
    qRegisterMetaType<package>("package");
    _tcpServer = new QTcpServer(this);
    _uc = new UserCreator();
    connect(_tcpServer, SIGNAL(newConnection()),
            this, SLOT(newConnectionSlot()));
}

Server::~Server()
{
    delete ui;
    delete _tcpServer;
    delete _uc;
}

void Server::newConnectionSlot()
{
    ui->listen_te->append("new client in");
    //get client's address
    QTcpSocket *clientSocket = _tcpServer->nextPendingConnection();
    QString ip = clientSocket->peerAddress().toString();
    QString port = QString::number(clientSocket->peerPort());

    QString addr;
    addr += "ip:" + ip + "\tport:" + port;
    ui->listen_te->append(addr);

    SocketHandler *sh = new SocketHandler(clientSocket);
    connect(sh, SIGNAL(sendToWindow(QString)),
            this, SLOT(sendToWindowSlot(QString)));
    connect(sh, SIGNAL(writeToMainThread(QTcpSocket*, package, qint64)),
            this, SLOT(writeToMainThreadSlot(QTcpSocket*, package, qint64)));

    QThread* th = new QThread(this);
    sh->moveToThread(th);
    th->start();

    connect(clientSocket, SIGNAL(disconnected()),
            sh, SLOT(deleteLater()));
    connect(sh, SIGNAL(destroyed(QObject *)),
            th, SLOT(terminate()));
    shared_ptr<NetWorkHelper> instance = NetWorkHelper::getInstance();
    instance->insertClient(sh);
}

void Server::sendToWindowSlot(QString text)
{
    ui->listen_te->append(text);
}

void Server::writeToMainThreadSlot(QTcpSocket *socket, package pack, qint64 len)
{
    socket->write(reinterpret_cast<const char *>(&pack), len);
}


void Server::on_listen_pb_clicked()
{
    if(_tcpServer->isListening()) {
        ui->listen_te->append("alread start");
        ui->listen_pb->setEnabled(false);
        return;
    }
    if(_tcpServer->listen(QHostAddress::LocalHost, 10000))
        ui->listen_te->append("listening");
    else
        ui->listen_te->append("failed");
}

void Server::on_new_client_pb_clicked()
{
    _uc->show();
}
