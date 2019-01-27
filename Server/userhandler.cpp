#include "userhandler.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QVariant>
#include <memory>
UserHandler::UserHandler()
{

}

bool UserHandler::insertUser(const User &user)
{
    std::shared_ptr<DbHelper> instance = DbHelper::getInstance();
    instance->createConnection();
    bool ret;
    {
        QSqlQuery query;
        query.prepare("insert into doctors(id, pwd, name, tel, head_rb, dent_rb, face_rb, anim_rb, prod_rb, power) "
                      " values(:id, :pwd, :name, :tel, :head_rb, :dent_rb, :face_rb, :anim_rb, :prod_rb, :power)");
        query.bindValue(":id", user._id);
        query.bindValue(":pwd", user._pwd);
        query.bindValue(":name", user._name);
        query.bindValue(":tel", user._tel);
        query.bindValue(":head_rb", user._privilege[0]);
        query.bindValue(":dent_rb", user._privilege[1]);
        query.bindValue(":face_rb", user._privilege[2]);
        query.bindValue(":anim_rb", user._privilege[3]);
        query.bindValue(":prod_rb", user._privilege[4]);
        query.bindValue(":power", user._isAdmin);
        ret = query.exec();
        if(!ret){
            qDebug() << query.lastError().text();
        }
    }
    instance->removeConnection();
    return ret;
}

bool UserHandler::checkUser(const User &user)
{
    std::shared_ptr<DbHelper> instance = DbHelper::getInstance();
    instance->createConnection();
    bool ret;
    {
        QSqlQuery query;
        query.prepare("select id, pwd from doctors"
                      " where id = :id and pwd = :pwd");
        query.bindValue(":id",user._id);
        query.bindValue(":pwd",user._pwd);

        ret = query.exec();
        if(!ret){
            qDebug() << query.lastError().text();
        }
        //检测结果集是否存在记录
        ret = query.next();
    }
    instance->removeConnection();
    return ret;
}

bool UserHandler::checkAdmin(const User &user)
{
    std::shared_ptr<DbHelper> instance = DbHelper::getInstance();
    instance->createConnection();
    bool ret;
    {
        QSqlQuery query;
        query.prepare("select power from doctors"
                      "where id = :id and pwd = :pwd");
        query.bindValue(":id", user._id);
        query.bindValue(":pwd", user._pwd);

        ret = query.exec();
        if(!ret) {
            qDebug() << query.lastError().text();
        }
        if(query.next()) {
            ret = query.value(0).toBool();
        } else ret = false;
    }
    instance->removeConnection();
    return ret;
}

bool UserHandler::checkUserPrivilege(const User &user, int item)
{
    std::shared_ptr<DbHelper> instance = DbHelper::getInstance();
    instance->createConnection();
    bool ret;
    {
        QSqlQuery query;
        query.prepare("select head_rb, dent_rb, face_rb, anim_rb, prod_rb from doctors"
                      "where id = :id and pwd = :pwd");
        query.bindValue(":id", user._id);
        query.bindValue(":pwd", user._pwd);

        ret = query.exec();
        if(!ret) {
            qDebug() << query.lastError().text();
        }

        if(query.next()) {
            ret = query.value(item).toBool();
        } else {
            qDebug() << "can't search privilege";
            ret = false;
        }
    }
    instance->removeConnection();
    return ret;
}

