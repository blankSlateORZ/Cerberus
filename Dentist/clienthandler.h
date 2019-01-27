#ifndef CLIENTHANDLER_H
#define CLIENTHANDLER_H
#include <memory>
#include <QString>
#include <QByteArray>
#include <QTcpSocket>
#include <QHostAddress>
#include "package.h"

class ClientHandler : public QObject
{
    Q_OBJECT
private:
    ClientHandler();
    ClientHandler(const ClientHandler &) = delete;
    ClientHandler &operator=(const ClientHandler &) = delete;

    static std::shared_ptr<ClientHandler> instance;
    QTcpSocket *_clientSocket;

private slots:
    void readyReadSlot();

public:
    void writeToServer(package &);
    static std::shared_ptr<ClientHandler> getInstance();
};

#endif // CLIENTHANDLER_H
