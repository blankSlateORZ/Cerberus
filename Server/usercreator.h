#ifndef USERCREATOR_H
#define USERCREATOR_H

#include <QMainWindow>

namespace Ui {
class UserCreator;
}

class UserCreator : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserCreator(QWidget *parent = nullptr);
    ~UserCreator();

private:
    Ui::UserCreator *ui;
};

#endif // USERCREATOR_H