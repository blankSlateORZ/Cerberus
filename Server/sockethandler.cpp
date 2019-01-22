#include "sockethandler.h"

SocketHandler::SocketHandler(QTcpSocket *clientSocket, QObject *parent) :
    QObject(parent),
    _clientSocket(clientSocket)
{
    connect(this->_clientSocket, SIGNAL(readyRead()),
            this, SLOT(readyReadSlot()));
}

SocketHandler::~SocketHandler()
{
    delete _clientSocket;
}

QTcpSocket *SocketHandler::getSocket()
{
    return this->_clientSocket;
}

void SocketHandler::readyReadSlot()
{
    package pack;
    memset(&pack, 0, sizeof pack);
    _clientSocket->read(reinterpret_cast<char *>(&pack), sizeof pack);
    switch (pack.type) {
    case TYPE_LOGIN_SUCCEED:
        break;
    case TYPE_LOGIN_FAILURE:
        break;
    case TYPE_LOGIN_RELOGIN:
        break;
    default:
        break;
    }
}
