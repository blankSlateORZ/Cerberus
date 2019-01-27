#ifndef HELPER_H
#define HELPER_H

#include <QMainWindow>
#include <QString>

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
};

#endif // HELPER_H
