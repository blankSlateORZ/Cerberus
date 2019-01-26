#include "dbhelper.h"
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
std::shared_ptr<DbHelper> DbHelper::instance = nullptr;
QMutex DbHelper::mutex;


DbHelper::DbHelper()
{
    db= QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("192.168.1.103");             //127.0.0.1也是一样的,属于本地地址
    db.setUserName("root");                      //登陆MYSQL的用户名
    db.setPassword("123456");                    //你自己登陆的密码
    db.setDatabaseName("dentist");               //登陆数据库的名称
}

std::shared_ptr<DbHelper> DbHelper::getInstance()
{
    if(!instance){
        mutex.lock();
        if(!instance){
            std::shared_ptr<DbHelper> obj(new DbHelper());
            instance = obj;
        }
        mutex.unlock();
    }
    return instance;
}
bool DbHelper::insertUser(const package &pack)
{
    db.open();
    QSqlQuery query;
    query.prepare("insert into user(name, password) "
                  " values(:name, :pwd)");
    query.bindValue(":name", pack.id);
    query.bindValue(":pwd", pack.pwd);

    bool ret = query.exec();
    if(!ret){
        qDebug() << query.lastError().text();
    }
    db.close();
    return ret;
}

bool DbHelper::checkUser(const package &pack)
{
    db.open();
    QSqlQuery query;
    query.prepare("select name, password from user "
                  " where name = :name and password = :pwd");
    query.bindValue(":name", pack.id);
    query.bindValue(":pwd", pack.pwd);

    bool ret = query.exec();
    if(!ret){
        qDebug() << query.lastError().text();
    }

    //检测结果集是否存在记录
    ret = query.next();

    db.close();
    return ret;
}



