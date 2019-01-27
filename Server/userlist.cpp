#include "userlist.h"

std::shared_ptr<UserList> UserList::instance = nullptr;
QMutex UserList::mutex;

UserList::UserList()
{

}

std::shared_ptr<UserList> UserList::getInstance()
{
    if(!instance)
    {
        mutex.lock();
        if(!instance)
            instance = std::shared_ptr<UserList>(new UserList());
        mutex.unlock();
    }
    return instance;
}

void UserList::insertUserToList(const QString &id, const QString &pwd)
{
    list.insert(id, pwd);
}

void UserList::eraseUserToList(const QString &id)
{
    for(auto it = list.begin(); it != list.end(); ++it) {
        if(id == it.key()) {
            list.erase(it);
            return;
        }
    }
}

bool UserList::isContain(const QString &id)
{
    return list.contains(id);
}
