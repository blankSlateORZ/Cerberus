#include "sockethandler.h"
#include "userhandler.h"
#include "user.h"
#include <QString>
#include <memory>
#include "userlist.h"

SocketHandler::SocketHandler(QTcpSocket *clientSocket, QObject *parent) :
    QObject(parent),
    _clientSocket(clientSocket)
{
    connect(this->_clientSocket, SIGNAL(readyRead()),
            this, SLOT(readyReadSlot()));
}

SocketHandler::~SocketHandler()
{
    if (_clientSocket)
        delete _clientSocket;
}

QTcpSocket *SocketHandler::getSocket()
{
    return this->_clientSocket;
}

void SocketHandler::readyReadSlot()
{qDebug()<< "enter";
    package pack;
    memset(&pack, 0, sizeof pack);
    _clientSocket->read(reinterpret_cast<char *>(&pack), sizeof pack);
    switch (pack.type) {
    case TYPE_LOGIN:
        userLogin(pack);
        break;
    default:
        break;
    }
}

void SocketHandler::userLogin(const package &pack)
{
    UserHandler uh;
    QString &&id = QString::fromLocal8Bit(pack.id);
    QString &&pwd = QString::fromLocal8Bit(pack.pwd);
    User user(id, pwd);

    package packRet;
    memset(&packRet, 0, sizeof packRet);

    if(uh.checkUser(user)) {
        std::shared_ptr<UserList> instance = UserList::getInstance();
        if(instance->isContain(id)) packRet.type = TYPE_LOGIN_RELOGIN;
        else {
            instance->insertUserToList(id, pwd);
            packRet.type = TYPE_LOGIN_SUCCEED;
        }
    } else packRet.type = TYPE_LOGIN_FAILURE;

    emit writeToMainThread(this->_clientSocket,
                           packRet, sizeof packRet);
}
