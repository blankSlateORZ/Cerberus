#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QString>
#include <QByteArray>
#include <QTcpSocket>
#include "package.h"

namespace Ui {
class login;
}


struct remember_pwd {
    bool flag;
    char id[20];
    char pwd[20];
};

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_login_pb_clicked();

private:
    Ui::login *ui;
};
#endif // LOGIN_H
