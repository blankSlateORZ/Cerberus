#ifndef NETWORKHELPER_H
#define NETWORKHELPER_H
#include <QMutex>
#include <QVector>
#include <memory>
#include "sockethandler.h"

class NetWorkHelper
{
private:
    NetWorkHelper();
    NetWorkHelper(const NetWorkHelper&) = delete;
    NetWorkHelper &operator=(NetWorkHelper &) = delete;
    static std::shared_ptr<NetWorkHelper> instance;
    static QMutex mutex;
    QVector<SocketHandler *> clients;
public:
    static std::shared_ptr<NetWorkHelper> getInstance();
    const QVector<SocketHandler *> &getClients() const;
    void insertClient(SocketHandler *);
};

#endif // NETWORKHELPER_H
