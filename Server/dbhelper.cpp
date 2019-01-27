#include "dbhelper.h"
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <array>


std::shared_ptr<DbHelper> DbHelper::instance = nullptr;
QMutex DbHelper::mutex;


DbHelper::DbHelper()
{
    db= QSqlDatabase::addDatabase("QMYSQL");
}

std::shared_ptr<DbHelper> DbHelper::getInstance()
{
    if(!instance)
    {
        mutex.lock();
        if(!instance)
            instance = std::shared_ptr<DbHelper>(new DbHelper());
        mutex.unlock();
    }
    return instance;
}

void DbHelper::createConnection()
{
    db.setHostName("127.0.0.1");             //127.0.0.1也是一样的,属于本地地址
    //db.setPort(3306);
    db.setUserName("root");                      //登陆MYSQL的用户名
    db.setPassword("123456");                    //你自己登陆的密码
    db.setDatabaseName("dentist");               //登陆数据库的名称
    if (db.open()) {
        qDebug() << "成功连接数据库";
    } else {
        qDebug() << "无法连接数据库";
    }

}

void DbHelper::removeConnection()
{
    db.close();
    db.removeDatabase("hosthouse");
}








