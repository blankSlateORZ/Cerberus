/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *function_lw;
    QLabel *remind_lb;
    QStackedWidget *function_view_sw;
    QWidget *page;
    QPushButton *patient_list_pb;
    QPushButton *new_patient_pb;
    QPushButton *in_cure_pb;
    QPushButton *end_cure_pb;
    QPushButton *sort_patient_pb;
    QLineEdit *serch_patient_le;
    QPushButton *serch_patient_pb;
    QListView *patient_view_lv;
    QStackedWidget *patient_data_view_sw;
    QWidget *page_11;
    QWidget *page_12;
    QListWidget *listWidget;
    QWidget *page_2;
    QWidget *page_3;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *page_7;
    QWidget *page_8;
    QWidget *page_9;
    QWidget *page_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(932, 516);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        function_lw = new QListWidget(centralwidget);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        new QListWidgetItem(function_lw);
        function_lw->setObjectName(QString::fromUtf8("function_lw"));
        function_lw->setGeometry(QRect(10, 30, 131, 441));
        remind_lb = new QLabel(centralwidget);
        remind_lb->setObjectName(QString::fromUtf8("remind_lb"));
        remind_lb->setGeometry(QRect(20, 10, 291, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Aharoni"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        remind_lb->setFont(font);
        function_view_sw = new QStackedWidget(centralwidget);
        function_view_sw->setObjectName(QString::fromUtf8("function_view_sw"));
        function_view_sw->setGeometry(QRect(190, 40, 711, 431));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        patient_list_pb = new QPushButton(page);
        patient_list_pb->setObjectName(QString::fromUtf8("patient_list_pb"));
        patient_list_pb->setGeometry(QRect(20, 10, 61, 23));
        new_patient_pb = new QPushButton(page);
        new_patient_pb->setObjectName(QString::fromUtf8("new_patient_pb"));
        new_patient_pb->setGeometry(QRect(90, 10, 61, 23));
        in_cure_pb = new QPushButton(page);
        in_cure_pb->setObjectName(QString::fromUtf8("in_cure_pb"));
        in_cure_pb->setGeometry(QRect(20, 40, 61, 23));
        end_cure_pb = new QPushButton(page);
        end_cure_pb->setObjectName(QString::fromUtf8("end_cure_pb"));
        end_cure_pb->setGeometry(QRect(90, 40, 61, 23));
        sort_patient_pb = new QPushButton(page);
        sort_patient_pb->setObjectName(QString::fromUtf8("sort_patient_pb"));
        sort_patient_pb->setGeometry(QRect(20, 70, 21, 21));
        serch_patient_le = new QLineEdit(page);
        serch_patient_le->setObjectName(QString::fromUtf8("serch_patient_le"));
        serch_patient_le->setGeometry(QRect(50, 70, 71, 21));
        serch_patient_pb = new QPushButton(page);
        serch_patient_pb->setObjectName(QString::fromUtf8("serch_patient_pb"));
        serch_patient_pb->setGeometry(QRect(130, 70, 21, 23));
        patient_view_lv = new QListView(page);
        patient_view_lv->setObjectName(QString::fromUtf8("patient_view_lv"));
        patient_view_lv->setGeometry(QRect(20, 100, 131, 261));
        patient_data_view_sw = new QStackedWidget(page);
        patient_data_view_sw->setObjectName(QString::fromUtf8("patient_data_view_sw"));
        patient_data_view_sw->setGeometry(QRect(190, 110, 421, 261));
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        patient_data_view_sw->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QString::fromUtf8("page_12"));
        patient_data_view_sw->addWidget(page_12);
        listWidget = new QListWidget(page);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(180, 10, 291, 51));
        listWidget->setFlow(QListView::LeftToRight);
        function_view_sw->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        function_view_sw->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        function_view_sw->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        function_view_sw->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        function_view_sw->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        function_view_sw->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        function_view_sw->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        function_view_sw->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        function_view_sw->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        function_view_sw->addWidget(page_10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 932, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        function_view_sw->setCurrentIndex(0);
        patient_data_view_sw->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));

        const bool __sortingEnabled = function_lw->isSortingEnabled();
        function_lw->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = function_lw->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\346\202\243\350\200\205\344\270\255\345\277\203", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = function_lw->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\347\205\247\347\211\207\350\265\204\346\226\231", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = function_lw->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\345\244\264\345\275\261\346\265\213\351\207\217", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = function_lw->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "3D\347\211\231\346\250\241", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = function_lw->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "3D\351\235\242\351\203\250", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = function_lw->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "\345\212\250\347\224\273\346\226\271\346\241\210", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = function_lw->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "\346\262\273\347\226\227\346\226\271\346\241\210", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = function_lw->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "\344\270\213\345\215\225\345\210\266\344\275\234", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = function_lw->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "\344\270\252\344\272\272\350\256\276\347\275\256", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = function_lw->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        function_lw->setSortingEnabled(__sortingEnabled);

        remind_lb->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        patient_list_pb->setText(QApplication::translate("MainWindow", "\346\202\243\350\200\205\345\210\227\350\241\250", nullptr));
        new_patient_pb->setText(QApplication::translate("MainWindow", "\346\226\260\345\242\236\346\202\243\350\200\205", nullptr));
        in_cure_pb->setText(QApplication::translate("MainWindow", "\346\262\273\347\226\227\344\270\255", nullptr));
        end_cure_pb->setText(QApplication::translate("MainWindow", "\345\267\262\347\273\223\346\235\237", nullptr));
        sort_patient_pb->setText(QApplication::translate("MainWindow", "!", nullptr));
        serch_patient_pb->setText(QApplication::translate("MainWindow", "s", nullptr));

        const bool __sortingEnabled1 = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(0);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\265\204\346\226\231", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(1);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "\346\243\200\346\237\245\350\265\204\346\226\231", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(2);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "\346\262\273\347\226\227\351\230\266\346\256\265", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(3);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\257\271\346\257\224", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget->item(4);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "\345\260\261\350\257\212\350\256\260\345\275\225", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
