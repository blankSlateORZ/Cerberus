#include "networkhelper.h"

std::shared_ptr<NetWorkHelper> NetWorkHelper::instance = nullptr;
QMutex NetWorkHelper::mutex;


NetWorkHelper::NetWorkHelper()
{ }


std::shared_ptr<NetWorkHelper> NetWorkHelper::getInstance()
{
    if(!instance)
    {
        mutex.lock();
        if(!instance)
            instance = std::shared_ptr<NetWorkHelper>(new NetWorkHelper());
        mutex.unlock();
    }
    return instance;
}

const QVector<SocketHandler *> &NetWorkHelper::getClients() const
{
    return this->clients;
}

void NetWorkHelper::insertClient(SocketHandler *sh)
{
    this->clients.push_back(sh);
}
