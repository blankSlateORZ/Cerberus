#include "user.h"

User::User(QString id, QString pwd, QString name,
           QString tel, std::array<bool, 5> privilege) :
    _id(id),
    _pwd(pwd),
    _name(name),
    _tel(tel),
    _privilege(privilege)
{ }
