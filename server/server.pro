#-------------------------------------------------
#
# Project created by QtCreator 2019-01-22T16:48:06
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        helper.cpp \
    server.cpp \
    sockethandler.cpp \
    networkhelper.cpp \
    dbhelper.cpp \
    usercreator.cpp \
    user.cpp \
    userlist.cpp \
    login.cpp \
    userhandler.cpp

HEADERS += \
        helper.h \
    package.h \
    server.h \
    sockethandler.h \
    networkhelper.h \
    dbhelper.h \
    usercreator.h \
    user.h \
    userlist.h \
    login.h \
    userhandler.h

FORMS += \
        helper.ui \
    server.ui \
    usercreator.ui \
    login.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
