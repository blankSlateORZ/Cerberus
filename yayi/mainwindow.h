#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include "mainwindow2.h"
#include "sendquestion.h"
#include "repassword.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_PBlogin_clicked();

    void on_PBregiste_clicked();


    void on_checkBox_stateChanged(int arg1);

    void on_PBforget_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    MainWindow2 *ui2;
    sendquestion *question;
    QSqlDatabase db;
    repassword *repass;
    int flag;
};

#endif // MAINWINDOW_H
