#ifndef USERHANDLER_H
#define USERHANDLER_H
#include "user.h"
#include "dbhelper.h"

class UserHandler
{
public:
    UserHandler();

    bool insertUser(const User &user);
    bool checkUser(const User &user);
    bool checkAdmin(const User &user);
    bool checkUserPrivilege(const User &user, int item);
};

#endif // USERHANDLER_H
