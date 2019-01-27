#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "helper.h"
#include "server.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_register_pb_clicked();
    void on_login_pb_clicked();

private:
    Ui::Login *ui;
    Helper *_register;
    Server *_server;
};

#endif // LOGIN_H
