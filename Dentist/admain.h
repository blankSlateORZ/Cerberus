#ifndef ADMAIN_H
#define ADMAIN_H

#include <QMainWindow>

namespace Ui {
class admain;
}

class admain : public QMainWindow
{
    Q_OBJECT

public:
    explicit admain(QWidget *parent = 0);
    ~admain();

private slots:
    void on_lw1_admin_currentRowChanged(int currentRow);

private:
    Ui::admain *ui;
};

#endif // ADMAIN_H
