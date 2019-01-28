/********************************************************************************
** Form generated from reading UI file 'admain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMAIN_H
#define UI_ADMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admain
{
public:
    QWidget *centralwidget;
    QStackedWidget *sw1_admin;
    QWidget *page_25;
    QLabel *label_79;
    QLabel *lb1;
    QLabel *label_81;
    QTableWidget *tw1;
    QWidget *page_26;
    QLabel *label_82;
    QLabel *label_83;
    QLabel *label_84;
    QLabel *label_85;
    QLabel *label_86;
    QLabel *label_87;
    QLineEdit *le2_1;
    QLineEdit *le2_2;
    QLineEdit *le2_3;
    QLineEdit *le2_4;
    QLineEdit *le2_5;
    QCheckBox *cb2_1;
    QCheckBox *cb2_2;
    QCheckBox *cb2_3;
    QCheckBox *cb2_4;
    QCheckBox *cb2_5;
    QPushButton *pb2_insert;
    QWidget *page_27;
    QLabel *label_88;
    QLabel *lb3_1;
    QPushButton *pushButton_2;
    QLabel *label_90;
    QLineEdit *le3_1;
    QLabel *label_91;
    QLabel *lb3_2;
    QLabel *label_89;
    QPushButton *pushButton_3;
    QLineEdit *le3_2;
    QLabel *label_92;
    QLabel *lb3_3;
    QLabel *label_93;
    QPushButton *pushButton_4;
    QLineEdit *le3_3;
    QLabel *label_94;
    QLabel *lb3_4;
    QLabel *label_95;
    QPushButton *pushButton_5;
    QLineEdit *le3_4;
    QWidget *page_28;
    QLabel *label_96;
    QLabel *lb4_1;
    QLabel *label_98;
    QLabel *lb4_2;
    QLabel *label_100;
    QLabel *lb4_3;
    QLabel *label_102;
    QLabel *lb4_4;
    QLabel *label_104;
    QLineEdit *le4;
    QTableWidget *tw4;
    QWidget *page_29;
    QPushButton *pushButton_6;
    QPushButton *pb5_1;
    QPushButton *pushButton_8;
    QPushButton *pb5_2;
    QPushButton *pushButton_14;
    QPushButton *pb5_3;
    QListWidget *lw1_admin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admain)
    {
        if (admain->objectName().isEmpty())
            admain->setObjectName(QString::fromUtf8("admain"));
        admain->resize(943, 608);
        centralwidget = new QWidget(admain);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sw1_admin = new QStackedWidget(centralwidget);
        sw1_admin->setObjectName(QString::fromUtf8("sw1_admin"));
        sw1_admin->setGeometry(QRect(20, 60, 821, 541));
        page_25 = new QWidget();
        page_25->setObjectName(QString::fromUtf8("page_25"));
        label_79 = new QLabel(page_25);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setGeometry(QRect(20, 20, 131, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Aharoni"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_79->setFont(font);
        lb1 = new QLabel(page_25);
        lb1->setObjectName(QString::fromUtf8("lb1"));
        lb1->setGeometry(QRect(170, 20, 131, 21));
        lb1->setFont(font);
        label_81 = new QLabel(page_25);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setGeometry(QRect(20, 100, 131, 21));
        label_81->setFont(font);
        tw1 = new QTableWidget(page_25);
        if (tw1->columnCount() < 3)
            tw1->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tw1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tw1->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tw1->setObjectName(QString::fromUtf8("tw1"));
        tw1->setGeometry(QRect(30, 130, 451, 311));
        sw1_admin->addWidget(page_25);
        page_26 = new QWidget();
        page_26->setObjectName(QString::fromUtf8("page_26"));
        label_82 = new QLabel(page_26);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setGeometry(QRect(30, 20, 81, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aharoni"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_82->setFont(font1);
        label_83 = new QLabel(page_26);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setGeometry(QRect(30, 50, 81, 21));
        label_83->setFont(font1);
        label_84 = new QLabel(page_26);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setGeometry(QRect(30, 80, 81, 21));
        label_84->setFont(font1);
        label_85 = new QLabel(page_26);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setGeometry(QRect(30, 120, 81, 21));
        label_85->setFont(font1);
        label_86 = new QLabel(page_26);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setGeometry(QRect(30, 150, 81, 21));
        label_86->setFont(font1);
        label_87 = new QLabel(page_26);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setGeometry(QRect(30, 180, 81, 21));
        label_87->setFont(font1);
        le2_1 = new QLineEdit(page_26);
        le2_1->setObjectName(QString::fromUtf8("le2_1"));
        le2_1->setGeometry(QRect(120, 20, 151, 31));
        le2_1->setFont(font1);
        le2_2 = new QLineEdit(page_26);
        le2_2->setObjectName(QString::fromUtf8("le2_2"));
        le2_2->setGeometry(QRect(120, 50, 151, 31));
        le2_2->setFont(font1);
        le2_3 = new QLineEdit(page_26);
        le2_3->setObjectName(QString::fromUtf8("le2_3"));
        le2_3->setGeometry(QRect(120, 80, 151, 31));
        le2_3->setFont(font1);
        le2_4 = new QLineEdit(page_26);
        le2_4->setObjectName(QString::fromUtf8("le2_4"));
        le2_4->setGeometry(QRect(120, 110, 151, 31));
        le2_4->setFont(font1);
        le2_5 = new QLineEdit(page_26);
        le2_5->setObjectName(QString::fromUtf8("le2_5"));
        le2_5->setGeometry(QRect(120, 140, 151, 31));
        le2_5->setFont(font1);
        cb2_1 = new QCheckBox(page_26);
        cb2_1->setObjectName(QString::fromUtf8("cb2_1"));
        cb2_1->setGeometry(QRect(130, 180, 131, 21));
        cb2_1->setFont(font1);
        cb2_2 = new QCheckBox(page_26);
        cb2_2->setObjectName(QString::fromUtf8("cb2_2"));
        cb2_2->setGeometry(QRect(130, 210, 131, 21));
        cb2_2->setFont(font1);
        cb2_3 = new QCheckBox(page_26);
        cb2_3->setObjectName(QString::fromUtf8("cb2_3"));
        cb2_3->setGeometry(QRect(130, 240, 131, 21));
        cb2_3->setFont(font1);
        cb2_4 = new QCheckBox(page_26);
        cb2_4->setObjectName(QString::fromUtf8("cb2_4"));
        cb2_4->setGeometry(QRect(130, 260, 131, 21));
        cb2_4->setFont(font1);
        cb2_5 = new QCheckBox(page_26);
        cb2_5->setObjectName(QString::fromUtf8("cb2_5"));
        cb2_5->setGeometry(QRect(130, 280, 131, 21));
        cb2_5->setFont(font1);
        pb2_insert = new QPushButton(page_26);
        pb2_insert->setObjectName(QString::fromUtf8("pb2_insert"));
        pb2_insert->setGeometry(QRect(410, 370, 111, 51));
        sw1_admin->addWidget(page_26);
        page_27 = new QWidget();
        page_27->setObjectName(QString::fromUtf8("page_27"));
        label_88 = new QLabel(page_27);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(30, 20, 141, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_88->setFont(font2);
        lb3_1 = new QLabel(page_27);
        lb3_1->setObjectName(QString::fromUtf8("lb3_1"));
        lb3_1->setGeometry(QRect(180, 20, 61, 31));
        lb3_1->setFont(font2);
        pushButton_2 = new QPushButton(page_27);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 20, 71, 31));
        pushButton_2->setFont(font1);
        label_90 = new QLabel(page_27);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setGeometry(QRect(350, 20, 111, 31));
        label_90->setFont(font1);
        le3_1 = new QLineEdit(page_27);
        le3_1->setObjectName(QString::fromUtf8("le3_1"));
        le3_1->setGeometry(QRect(470, 19, 121, 31));
        le3_1->setFont(font1);
        label_91 = new QLabel(page_27);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setGeometry(QRect(350, 61, 111, 31));
        label_91->setFont(font1);
        lb3_2 = new QLabel(page_27);
        lb3_2->setObjectName(QString::fromUtf8("lb3_2"));
        lb3_2->setGeometry(QRect(180, 61, 61, 31));
        lb3_2->setFont(font2);
        label_89 = new QLabel(page_27);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setGeometry(QRect(30, 61, 141, 31));
        label_89->setFont(font2);
        pushButton_3 = new QPushButton(page_27);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 61, 71, 31));
        pushButton_3->setFont(font1);
        le3_2 = new QLineEdit(page_27);
        le3_2->setObjectName(QString::fromUtf8("le3_2"));
        le3_2->setGeometry(QRect(470, 60, 121, 31));
        le3_2->setFont(font1);
        label_92 = new QLabel(page_27);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setGeometry(QRect(350, 101, 111, 31));
        label_92->setFont(font1);
        lb3_3 = new QLabel(page_27);
        lb3_3->setObjectName(QString::fromUtf8("lb3_3"));
        lb3_3->setGeometry(QRect(180, 101, 61, 31));
        lb3_3->setFont(font2);
        label_93 = new QLabel(page_27);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setGeometry(QRect(30, 101, 141, 31));
        label_93->setFont(font2);
        pushButton_4 = new QPushButton(page_27);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 101, 71, 31));
        pushButton_4->setFont(font1);
        le3_3 = new QLineEdit(page_27);
        le3_3->setObjectName(QString::fromUtf8("le3_3"));
        le3_3->setGeometry(QRect(470, 100, 121, 31));
        le3_3->setFont(font1);
        label_94 = new QLabel(page_27);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setGeometry(QRect(350, 151, 111, 31));
        label_94->setFont(font1);
        lb3_4 = new QLabel(page_27);
        lb3_4->setObjectName(QString::fromUtf8("lb3_4"));
        lb3_4->setGeometry(QRect(180, 151, 61, 31));
        lb3_4->setFont(font2);
        label_95 = new QLabel(page_27);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setGeometry(QRect(30, 151, 141, 31));
        label_95->setFont(font2);
        pushButton_5 = new QPushButton(page_27);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(260, 151, 71, 31));
        pushButton_5->setFont(font1);
        le3_4 = new QLineEdit(page_27);
        le3_4->setObjectName(QString::fromUtf8("le3_4"));
        le3_4->setGeometry(QRect(470, 150, 121, 31));
        le3_4->setFont(font1);
        sw1_admin->addWidget(page_27);
        page_28 = new QWidget();
        page_28->setObjectName(QString::fromUtf8("page_28"));
        label_96 = new QLabel(page_28);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setGeometry(QRect(30, 20, 121, 31));
        label_96->setFont(font2);
        lb4_1 = new QLabel(page_28);
        lb4_1->setObjectName(QString::fromUtf8("lb4_1"));
        lb4_1->setGeometry(QRect(160, 20, 51, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(12);
        lb4_1->setFont(font3);
        label_98 = new QLabel(page_28);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        label_98->setGeometry(QRect(220, 20, 121, 31));
        label_98->setFont(font2);
        lb4_2 = new QLabel(page_28);
        lb4_2->setObjectName(QString::fromUtf8("lb4_2"));
        lb4_2->setGeometry(QRect(350, 20, 51, 31));
        lb4_2->setFont(font3);
        label_100 = new QLabel(page_28);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        label_100->setGeometry(QRect(420, 20, 121, 31));
        label_100->setFont(font2);
        lb4_3 = new QLabel(page_28);
        lb4_3->setObjectName(QString::fromUtf8("lb4_3"));
        lb4_3->setGeometry(QRect(550, 20, 51, 31));
        lb4_3->setFont(font3);
        label_102 = new QLabel(page_28);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        label_102->setGeometry(QRect(620, 20, 121, 31));
        label_102->setFont(font2);
        lb4_4 = new QLabel(page_28);
        lb4_4->setObjectName(QString::fromUtf8("lb4_4"));
        lb4_4->setGeometry(QRect(750, 20, 51, 31));
        lb4_4->setFont(font3);
        label_104 = new QLabel(page_28);
        label_104->setObjectName(QString::fromUtf8("label_104"));
        label_104->setGeometry(QRect(30, 70, 91, 31));
        label_104->setFont(font2);
        le4 = new QLineEdit(page_28);
        le4->setObjectName(QString::fromUtf8("le4"));
        le4->setGeometry(QRect(140, 70, 181, 31));
        tw4 = new QTableWidget(page_28);
        if (tw4->columnCount() < 5)
            tw4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tw4->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tw4->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tw4->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tw4->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tw4->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        tw4->setObjectName(QString::fromUtf8("tw4"));
        tw4->setGeometry(QRect(30, 130, 601, 371));
        sw1_admin->addWidget(page_28);
        page_29 = new QWidget();
        page_29->setObjectName(QString::fromUtf8("page_29"));
        pushButton_6 = new QPushButton(page_29);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(50, 40, 141, 41));
        pushButton_6->setFont(font1);
        pb5_1 = new QPushButton(page_29);
        pb5_1->setObjectName(QString::fromUtf8("pb5_1"));
        pb5_1->setGeometry(QRect(220, 40, 71, 41));
        pb5_1->setFont(font1);
        pushButton_8 = new QPushButton(page_29);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(50, 90, 141, 41));
        pushButton_8->setFont(font1);
        pb5_2 = new QPushButton(page_29);
        pb5_2->setObjectName(QString::fromUtf8("pb5_2"));
        pb5_2->setGeometry(QRect(220, 90, 71, 41));
        pb5_2->setFont(font1);
        pushButton_14 = new QPushButton(page_29);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(50, 140, 141, 41));
        pushButton_14->setFont(font1);
        pb5_3 = new QPushButton(page_29);
        pb5_3->setObjectName(QString::fromUtf8("pb5_3"));
        pb5_3->setGeometry(QRect(220, 140, 71, 41));
        pb5_3->setFont(font1);
        sw1_admin->addWidget(page_29);
        lw1_admin = new QListWidget(centralwidget);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(85, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(lw1_admin);
        __qlistwidgetitem->setFont(font1);
        __qlistwidgetitem->setBackground(brush1);
        __qlistwidgetitem->setForeground(brush);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(lw1_admin);
        __qlistwidgetitem1->setFont(font1);
        __qlistwidgetitem1->setBackground(brush1);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(lw1_admin);
        __qlistwidgetitem2->setFont(font1);
        __qlistwidgetitem2->setBackground(brush1);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(lw1_admin);
        __qlistwidgetitem3->setFont(font1);
        __qlistwidgetitem3->setBackground(brush1);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(lw1_admin);
        __qlistwidgetitem4->setFont(font1);
        __qlistwidgetitem4->setBackground(brush1);
        lw1_admin->setObjectName(QString::fromUtf8("lw1_admin"));
        lw1_admin->setGeometry(QRect(30, 0, 381, 51));
        lw1_admin->setFlow(QListView::LeftToRight);
        admain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admain);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 943, 23));
        admain->setMenuBar(menubar);
        statusbar = new QStatusBar(admain);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admain->setStatusBar(statusbar);

        retranslateUi(admain);

        sw1_admin->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admain);
    } // setupUi

    void retranslateUi(QMainWindow *admain)
    {
        admain->setWindowTitle(QApplication::translate("admain", "MainWindow", nullptr));
        label_79->setText(QApplication::translate("admain", "\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267\357\274\232", nullptr));
        lb1->setText(QApplication::translate("admain", "xxxxxxxx", nullptr));
        label_81->setText(QApplication::translate("admain", "\350\257\212\346\211\200\350\264\246\345\217\267\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tw1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("admain", "\350\257\212\346\211\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tw1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("admain", "\345\214\273\347\224\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tw1->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("admain", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_82->setText(QApplication::translate("admain", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_83->setText(QApplication::translate("admain", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_84->setText(QApplication::translate("admain", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_85->setText(QApplication::translate("admain", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_86->setText(QApplication::translate("admain", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_87->setText(QApplication::translate("admain", "\351\200\211\346\213\251\346\235\203\351\231\220\357\274\232", nullptr));
        cb2_1->setText(QApplication::translate("admain", "\345\244\264\345\275\261\346\265\213\351\207\217", nullptr));
        cb2_2->setText(QApplication::translate("admain", "3D\347\211\231\346\250\241", nullptr));
        cb2_3->setText(QApplication::translate("admain", "3D\351\235\242\351\203\250", nullptr));
        cb2_4->setText(QApplication::translate("admain", "\345\212\250\347\224\273\346\226\271\346\241\210", nullptr));
        cb2_5->setText(QApplication::translate("admain", "\344\270\213\345\215\225\345\210\266\344\275\234", nullptr));
        pb2_insert->setText(QApplication::translate("admain", "\346\267\273\345\212\240", nullptr));
        label_88->setText(QApplication::translate("admain", "\345\244\264\345\275\261\346\265\213\351\207\217\357\274\232\345\211\251\344\275\231", nullptr));
        lb3_1->setText(QApplication::translate("admain", "500", nullptr));
        pushButton_2->setText(QApplication::translate("admain", "\345\205\205\345\200\274", nullptr));
        label_90->setText(QApplication::translate("admain", "\351\242\204\350\255\246\346\225\260\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        label_91->setText(QApplication::translate("admain", "\351\242\204\350\255\246\346\225\260\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        lb3_2->setText(QApplication::translate("admain", "500", nullptr));
        label_89->setText(QApplication::translate("admain", "3D\347\211\231\346\250\241\357\274\232\345\211\251\344\275\231", nullptr));
        pushButton_3->setText(QApplication::translate("admain", "\345\205\205\345\200\274", nullptr));
        label_92->setText(QApplication::translate("admain", "\351\242\204\350\255\246\346\225\260\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        lb3_3->setText(QApplication::translate("admain", "500", nullptr));
        label_93->setText(QApplication::translate("admain", "3D\351\235\242\351\203\250\357\274\232\345\211\251\344\275\231", nullptr));
        pushButton_4->setText(QApplication::translate("admain", "\345\205\205\345\200\274", nullptr));
        label_94->setText(QApplication::translate("admain", "\351\242\204\350\255\246\346\225\260\351\207\217\350\256\276\347\275\256\357\274\232", nullptr));
        lb3_4->setText(QApplication::translate("admain", "500", nullptr));
        label_95->setText(QApplication::translate("admain", "\345\212\250\347\224\273\346\226\271\346\241\210\357\274\232\345\211\251\344\275\231", nullptr));
        pushButton_5->setText(QApplication::translate("admain", "\345\205\205\345\200\274", nullptr));
        label_96->setText(QApplication::translate("admain", "\345\244\264\345\275\261\346\265\213\351\207\217\357\274\232\345\267\262\347\224\250", nullptr));
        lb4_1->setText(QApplication::translate("admain", "500", nullptr));
        label_98->setText(QApplication::translate("admain", "3D\347\211\231\346\250\241\357\274\232\345\267\262\347\224\250", nullptr));
        lb4_2->setText(QApplication::translate("admain", "500", nullptr));
        label_100->setText(QApplication::translate("admain", "3D\351\235\242\351\203\250\357\274\232\345\267\262\347\224\250", nullptr));
        lb4_3->setText(QApplication::translate("admain", "500", nullptr));
        label_102->setText(QApplication::translate("admain", "\345\212\250\347\224\273\346\226\271\346\241\210\357\274\232\345\267\262\347\224\250", nullptr));
        lb4_4->setText(QApplication::translate("admain", "500", nullptr));
        label_104->setText(QApplication::translate("admain", "\344\275\277\347\224\250\350\256\260\345\275\225\357\274\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tw4->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("admain", "\350\257\212\346\211\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tw4->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("admain", "\345\214\273\347\224\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tw4->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("admain", "\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tw4->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("admain", "\346\202\243\350\200\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tw4->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("admain", "\346\250\241\345\274\217", nullptr));
        pushButton_6->setText(QApplication::translate("admain", "\350\275\273\346\235\276\347\211\231\345\214\273\347\263\273\347\273\237", nullptr));
        pb5_1->setText(QApplication::translate("admain", "\345\257\274\345\205\245", nullptr));
        pushButton_8->setText(QApplication::translate("admain", "\347\211\231\345\214\273\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pb5_2->setText(QApplication::translate("admain", "\345\257\274\345\205\245", nullptr));
        pushButton_14->setText(QApplication::translate("admain", "\347\263\273\347\273\237", nullptr));
        pb5_3->setText(QApplication::translate("admain", "\345\257\274\345\205\245", nullptr));

        const bool __sortingEnabled = lw1_admin->isSortingEnabled();
        lw1_admin->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lw1_admin->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("admain", "\347\256\241\347\220\206\345\221\230", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = lw1_admin->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("admain", "\346\267\273\345\212\240\350\264\246\345\217\267", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = lw1_admin->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("admain", "\350\264\246\346\210\267\344\275\231\351\242\235", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = lw1_admin->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("admain", "\344\275\277\347\224\250\350\256\260\345\275\225", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = lw1_admin->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("admain", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
        lw1_admin->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class admain: public Ui_admain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMAIN_H
