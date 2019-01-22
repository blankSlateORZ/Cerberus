#include "server.h"
#include "ui_server.h"
#include <QHostAddress>
#include <memory>
#include <QThread>

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
    connect(_tcpServer, SIGNAL(newConnection),
            this, SLOT(newConnectionSlot()));
}

Server::~Server()
{
    delete ui;
    delete _tcpServer;
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
    shared_ptr<SocketHandler> sh = make_shared<SocketHandler>(clientSocket);
    connect(sh.get(), SIGNAL(sendToWindow(QString)),
            this, SLOT(sendToWindowSlot(QString)));
    connect(sh.get(), SIGNAL(writeToMainThread(QTcpSocket*, package, qint64)),
            this, SLOT(writeToMainThreadSlot(QTcpSocket*, package, qint64)));
    shared_ptr<QThread> th = make_shared<QThread>(this);
    sh->moveToThread(th.get());
    th.get()->start();
    \
    connect(clientSocket, SIGNAL(disconnected()),
            sh.get(), SLOT(deleteLater()));
    connect(sh.get(), SIGNAL(destroyed(QObject *)),
            th.get(), SLOT(terminate()));
    shared_ptr<NetWorkHelper> instance = NetWorkHelper::getInstance();
    instance.get()->insertClient(sh.get());
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
    {
        ui->listen_te->append("listening");
    } else {
        ui->listen_te->append("failed");
    }
}