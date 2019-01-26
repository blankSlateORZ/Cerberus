#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QTcpServer>
#include <QString>
#include <QTcpSocket>
#include "package.h"
#include "sockethandler.h"
#include "networkhelper.h"
#include "usercreator.h"

namespace Ui {
class Server;
}

class Server : public QMainWindow
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);
    Server(QString id, QString pwd, QWidget *parent = nullptr);
    ~Server();
public slots:
    void newConnectionSlot();
    void sendToWindowSlot(QString text);
    void writeToMainThreadSlot(QTcpSocket *socket, package pack, qint64 len);

private slots:
    void on_listen_pb_clicked();

    void on_new_client_pb_clicked();

private:
    Ui::Server *ui;
    QString _id;
    QString _pwd;
    QTcpServer *_tcpServer;
    UserCreator *_uc;
};

#endif // SERVER_H
