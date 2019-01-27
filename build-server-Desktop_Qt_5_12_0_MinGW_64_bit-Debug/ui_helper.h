/********************************************************************************
** Form generated from reading UI file 'helper.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPER_H
#define UI_HELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Helper
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *id_le;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *pwd_le;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *rePwd_le;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *name_le;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *tel_le;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Helper)
    {
        if (Helper->objectName().isEmpty())
            Helper->setObjectName(QString::fromUtf8("Helper"));
        Helper->resize(338, 248);
        centralWidget = new QWidget(Helper);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 294, 155));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        id_le = new QLineEdit(layoutWidget);
        id_le->setObjectName(QString::fromUtf8("id_le"));

        gridLayout->addWidget(id_le, 0, 3, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pwd_le = new QLineEdit(layoutWidget);
        pwd_le->setObjectName(QString::fromUtf8("pwd_le"));

        gridLayout->addWidget(pwd_le, 1, 3, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        rePwd_le = new QLineEdit(layoutWidget);
        rePwd_le->setObjectName(QString::fromUtf8("rePwd_le"));

        gridLayout->addWidget(rePwd_le, 2, 3, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        name_le = new QLineEdit(layoutWidget);
        name_le->setObjectName(QString::fromUtf8("name_le"));

        gridLayout->addWidget(name_le, 3, 3, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 4, 2, 1, 1);

        tel_le = new QLineEdit(layoutWidget);
        tel_le->setObjectName(QString::fromUtf8("tel_le"));

        gridLayout->addWidget(tel_le, 4, 3, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 5, 1, 1, 3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 5, 4, 1, 1);

        Helper->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Helper);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 338, 23));
        Helper->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Helper);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Helper->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Helper);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Helper->setStatusBar(statusBar);

        retranslateUi(Helper);

        QMetaObject::connectSlotsByName(Helper);
    } // setupUi

    void retranslateUi(QMainWindow *Helper)
    {
        Helper->setWindowTitle(QApplication::translate("Helper", "Helper", nullptr));
        label->setText(QApplication::translate("Helper", "\350\256\276\347\275\256\347\256\241\347\220\206\345\221\230\350\264\246\346\210\267", nullptr));
        label_2->setText(QApplication::translate("Helper", "\350\256\276\347\275\256\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("Helper", "\350\256\276\347\275\256\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201", nullptr));
        label_5->setText(QApplication::translate("Helper", "\350\256\276\347\275\256\347\256\241\347\220\206\345\221\230\345\247\223\345\220\215", nullptr));
        label_4->setText(QApplication::translate("Helper", "\350\256\276\347\275\256\347\256\241\347\220\206\345\221\230\346\211\213\346\234\272", nullptr));
        pushButton->setText(QApplication::translate("Helper", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Helper: public Ui_Helper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPER_H
