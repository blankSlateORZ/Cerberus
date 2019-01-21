#ifndef SENDQUESTION_H
#define SENDQUESTION_H

#include <QWidget>

namespace Ui {
class sendquestion;
}

class sendquestion : public QWidget
{
    Q_OBJECT

public:
    explicit sendquestion(QWidget *parent = 0);
    ~sendquestion();

private:
    Ui::sendquestion *ui;
};

#endif // SENDQUESTION_H
