#ifndef PACKAGE_H
#define PACKAGE_H
enum dataType {
    TYPE_LOGIN,
    TYPE_LOGIN_FAILURE,
    TYPE_LOGIN_SUCCEED,
    TYPE_LOGIN_RELOGIN
};

struct package {
    dataType type;
    char id[20];
    char pwd[20];
};

#endif // PACKAGE_H
