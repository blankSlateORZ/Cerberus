#ifndef PACKAGE_H
#define PACKAGE_H
enum dataType {
    TYPE_LOGIN,
    TYPE_LOGIN_FAILURE,
    TYPE_LOGIN_SUCCEED,
    TYPE_LOGIN_RELOGIN,
    TYPE_PATIENT_BASIS
};

struct package {
    dataType type;
    char id[20];
    char pwd[20];
    char message[256];
    int size;
};

#endif // PACKAGE_H
