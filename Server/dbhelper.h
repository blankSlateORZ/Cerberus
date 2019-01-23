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
    bool insertUser(const package &pack);
    bool checkUser(const package &pack);
};

#endif // DBHELPER_H
