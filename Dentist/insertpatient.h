#ifndef INSERTPATIENT_H
#define INSERTPATIENT_H

#include <QMainWindow>

namespace Ui {
class InsertPatient;
}

class InsertPatient : public QMainWindow
{
    Q_OBJECT

public:
    explicit InsertPatient(QWidget *parent = nullptr);
    ~InsertPatient();

private:
    Ui::InsertPatient *ui;
};

#endif // INSERTPATIENT_H
