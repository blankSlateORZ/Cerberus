#include "user.h"

User::User(QString id, QString pwd, QString name,
           QString tel, std::array<bool, 5> privilege, bool isAdmin) :
    _isAdmin(isAdmin),
    _id(id),
    _pwd(pwd),
    _name(name),
    _tel(tel),
    _privilege(privilege)
{ }

User::User(QString id, QString pwd) :
    _id(id), _pwd(pwd)
{
    _isAdmin = false;
    _tel = "";
    _name = "";
    _privilege = {0};
}
