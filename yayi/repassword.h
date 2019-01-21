#ifndef REPASSWORD_H
#define REPASSWORD_H

#include <QWidget>

namespace Ui {
class repassword;
}

class repassword : public QWidget
{
    Q_OBJECT

public:
    explicit repassword(QWidget *parent = 0);
    ~repassword();

private:
    Ui::repassword *ui;
};

#endif // REPASSWORD_H
