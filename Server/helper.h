#ifndef HELPER_H
#define HELPER_H

#include <QMainWindow>
#include <QString>
#include "server.h"

namespace Ui {
class Helper;
}

class Helper : public QMainWindow
{
    Q_OBJECT

public:
    explicit Helper(QWidget *parent = nullptr);
    ~Helper();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Helper *ui;
    Server *server;
};

#endif // HELPER_H
