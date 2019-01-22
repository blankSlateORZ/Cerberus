#ifndef SERVERCREATOR_H
#define SERVERCREATOR_H

#include <QMainWindow>

namespace Ui {
class ServerCreator;
}

class ServerCreator : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServerCreator(QWidget *parent = nullptr);
    ~ServerCreator();

private:
    Ui::ServerCreator *ui;
};

#endif // SERVERCREATOR_H
