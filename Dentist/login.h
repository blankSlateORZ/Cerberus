#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QString>
#include <QByteArray>
#include <QTcpSocket>
#include "package.h"
#include <QCloseEvent>
#include"mainwindow.h"
#include"insertpatient.h"
namespace Ui {
class login;
}


struct RemPwd {
    bool flag;
    QString id;
    QString pwd;
};

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    void closeEvent(QCloseEvent *event);

private slots:
    void on_login_pb_clicked();
    void readyReadSlot();

    void on_remmPwd_rb_clicked();

private:
    Ui::login *ui;
    QTcpSocket *_clientSocket;
    RemPwd _memo;
    MainWindow *mainui;
    InsertPatient *patientui;
};
#endif // LOGIN_H
