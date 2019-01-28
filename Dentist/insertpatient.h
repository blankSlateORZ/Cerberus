#ifndef INSERTPATIENT_H
#define INSERTPATIENT_H
#include "package.h"
#include <QMainWindow>
#include <QTcpSocket>
namespace Ui {
class InsertPatient;
}

class InsertPatient : public QMainWindow
{
    Q_OBJECT

public:
    explicit InsertPatient(QWidget *parent = 0);
    ~InsertPatient();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pb1_save_basis_clicked();

    void on_calendarWidget_clicked(const QDate &date);

    void on_radioButton_36_clicked(bool checked);

    void on_radioButton_37_clicked(bool checked);

private:
    Ui::InsertPatient *ui;
    QTcpSocket _clicksocket;
    QString sex;

};

#endif // INSERTPATIENT_H
