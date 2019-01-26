#ifndef DBHELPER_H
#define DBHELPER_H
#include <QMutex>
#include <QSqlDatabase>
#include <memory>
#include "package.h"

class DbHelper
{
private:
    DbHelper();
    DbHelper(const DbHelper &) = delete;
    DbHelper &operator=(const DbHelper &) = delete;

    static std::shared_ptr<DbHelper> instance;
    static QMutex mutex;
    QSqlDatabase db;
public:
    static std::shared_ptr<DbHelper> getInstance();
    void createConnection();
    void removeConnection();
//    bool checkUser(QString id, QString pwd);
    bool create(QString id, QString pwd, QString name, QString tel, std::array<bool,5> privilege,bool power);
};

#endif // DBHELPER_H
