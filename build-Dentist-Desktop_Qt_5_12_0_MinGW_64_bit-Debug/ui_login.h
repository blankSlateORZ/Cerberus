/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *id_label;
    QLabel *pwd_label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *id_le;
    QLineEdit *pwd_le;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *remmPwd_rb;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *login_pb;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(424, 234);
        centralWidget = new QWidget(login);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        id_label = new QLabel(centralWidget);
        id_label->setObjectName(QString::fromUtf8("id_label"));

        verticalLayout->addWidget(id_label);

        pwd_label = new QLabel(centralWidget);
        pwd_label->setObjectName(QString::fromUtf8("pwd_label"));

        verticalLayout->addWidget(pwd_label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        id_le = new QLineEdit(centralWidget);
        id_le->setObjectName(QString::fromUtf8("id_le"));

        verticalLayout_2->addWidget(id_le);

        pwd_le = new QLineEdit(centralWidget);
        pwd_le->setObjectName(QString::fromUtf8("pwd_le"));

        verticalLayout_2->addWidget(pwd_le);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        remmPwd_rb = new QRadioButton(centralWidget);
        remmPwd_rb->setObjectName(QString::fromUtf8("remmPwd_rb"));

        horizontalLayout_3->addWidget(remmPwd_rb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        login_pb = new QPushButton(centralWidget);
        login_pb->setObjectName(QString::fromUtf8("login_pb"));

        horizontalLayout_2->addWidget(login_pb);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        login->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(login);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 424, 23));
        login->setMenuBar(menuBar);
        mainToolBar = new QToolBar(login);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        login->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(login);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        login->setStatusBar(statusBar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", nullptr));
        id_label->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215", nullptr));
        pwd_label->setText(QApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        remmPwd_rb->setText(QApplication::translate("login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        login_pb->setText(QApplication::translate("login", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
