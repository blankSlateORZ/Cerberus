#ifndef USER_H
#define USER_H
#include <QString>
#include <array>

enum privilege_type {
    HEAD,
    DENT,
    FACE,
    ANIM,
    PROD
};

class User
{
public:
    User(QString id, QString pwd, QString name,
         QString tel, std::array<bool, 5> privilege, bool isAdmin = false);
    User(QString id, QString pwd);
    bool _isAdmin;
    QString _id;
    QString _pwd;
    QString _name;
    QString _tel;
    std::array<bool, 5> _privilege;
};

#endif // USER_H
