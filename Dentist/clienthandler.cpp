#include "clienthandler.h"
#include <QDebug>
std::shared_ptr<ClientHandler> ClientHandler::instance = std::shared_ptr<ClientHandler>(new ClientHandler());


ClientHandler::ClientHandler()
{
    _clientSocket = new QTcpSocket(this);
    _clientSocket->connectToHost(QHostAddress::LocalHost, 10000);
    connect(this->_clientSocket, SIGNAL(readyRead()),
            this, SLOT(readyReadSlot()));
}

void ClientHandler::readyReadSlot()
{

}

void ClientHandler::writeToServer(package &pack)
{
    _clientSocket->write(reinterpret_cast<const char *>(&pack), sizeof pack);
}

std::shared_ptr<ClientHandler> ClientHandler::getInstance()
{
    return instance;
}
