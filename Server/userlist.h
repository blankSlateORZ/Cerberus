#ifndef USERLIST_H
#define USERLIST_H
#include <memory>
#include <QMutex>
#include <QMap>

class UserList
{
private:
    UserList();
    UserList(const UserList &) = delete;
    UserList &operator=(const UserList &) = delete;
    static std::shared_ptr<UserList> instance;
    static QMutex mutex;
};

#endif // USERLIST_H
