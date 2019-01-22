#ifndef SOCKETHANDLER_H
#define SOCKETHANDLER_H

#include <QObject>
#include <QTcpSocket>
#include <package.h>

class SocketHandler : public QObject
{
    Q_OBJECT

public:
    SocketHandler(QTcpSocket *clientSocket, QObject *parent = nullptr);
    ~SocketHandler();
    QTcpSocket *getSocket();

signals:
    void sendToWindow(QString);
    void writeToMainThread(QTcpSocket *, package, qint64);
public slots:
    void readyReadSlot();
private:
    QTcpSocket *_clientSocket;
};

#endif // SOCKETHANDLER_H
