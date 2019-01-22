#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include <QTcpServer>
#include <QString>

namespace Ui {
class Server;
}

class Server : public QMainWindow
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);
    Server(QString id, QString pwd);
    ~Server();

private:
    Ui::Server *ui;
    QString _id;
    QString _pwd;
    QTcpServer serverSocket;
};

#endif // SERVER_H
