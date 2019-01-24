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

//bool DbHelper::checkUser(QString id,QString pwd)
//{
//    db.open();
//    QSqlQuery query;
//    query.prepare("select id, pwd from doctor "
//                  " where id = :id and pwd = :pwd");
//    query.bindValue(":id",id);
//    query.bindValue(":pwd",pwd);

//    bool ret = query.exec();
//    if(!ret){
//        qDebug() << query.lastError().text();
//    }

//    //检测结果集是否存在记录
//    ret = query.next();

//    db.close();
//    return ret;
//}

bool DbHelper::create(QString id, QString pwd, QString name, QString tel, std::array<bool, 5> privilege, bool power)
{
    db.open();
    QSqlQuery query;
    query.prepare("insert into doctor(id,pwd,name,tel,head_rb,dent_rb,face_rb,anim_rb,prod_rb,power) "
                  " values(:id, :pwd,:name,:tel,:head_rb,:face_rb,:anim_rb,:prod_rb,:power)");
    query.bindValue(":id",id);
    query.bindValue(":pwd", pwd);
    query.bindValue(":name",name);
    query.bindValue(":tel",tel);
    query.bindValue(":head_rb",privilege[0]);
    query.bindValue(":dent_rb",privilege[1]);
    query.bindValue(":face_rb",privilege[2]);
    query.bindValue(":anim_rb",privilege[3]);
    query.bindValue(":prod_rb",privilege[4]);
    query.bindValue(":power",power);
    bool ret = query.exec();
    if(!ret){
        qDebug() << query.lastError().text();
    }
    db.close();
    return ret;
}



