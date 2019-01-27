#ifndef USERLIST_H
#define USERLIST_H
#include <memory>
#include <QMutex>
#include <QMap>
#include <QString>

class UserList
{
private:
    UserList();
    UserList(const UserList &) = delete;
    UserList &operator=(const UserList &) = delete;
    static std::shared_ptr<UserList> instance;
    static QMutex mutex;
    QMap<QString, QString> list;
public:
    static std::shared_ptr<UserList> getInstance();
    void insertUserToList(const QString &id, const QString &pwd);
    void eraseUserToList(const QString &id);
    bool isContain(const QString &id);
};

#endif // USERLIST_H
