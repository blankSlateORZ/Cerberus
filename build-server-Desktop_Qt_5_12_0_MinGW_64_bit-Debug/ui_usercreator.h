/********************************************************************************
** Form generated from reading UI file 'usercreator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCREATOR_H
#define UI_USERCREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserCreator
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *id_le;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *pwd_le;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *rePwd_le;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *name_le;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *tel_le;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QRadioButton *head_rb;
    QRadioButton *dent_rb;
    QRadioButton *face_rb;
    QRadioButton *anim_rb;
    QRadioButton *prod_rb;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserCreator)
    {
        if (UserCreator->objectName().isEmpty())
            UserCreator->setObjectName(QString::fromUtf8("UserCreator"));
        UserCreator->resize(291, 358);
        centralwidget = new QWidget(UserCreator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        id_le = new QLineEdit(centralwidget);
        id_le->setObjectName(QString::fromUtf8("id_le"));

        horizontalLayout->addWidget(id_le);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pwd_le = new QLineEdit(centralwidget);
        pwd_le->setObjectName(QString::fromUtf8("pwd_le"));

        horizontalLayout_2->addWidget(pwd_le);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        rePwd_le = new QLineEdit(centralwidget);
        rePwd_le->setObjectName(QString::fromUtf8("rePwd_le"));

        horizontalLayout_3->addWidget(rePwd_le);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        name_le = new QLineEdit(centralwidget);
        name_le->setObjectName(QString::fromUtf8("name_le"));

        horizontalLayout_4->addWidget(name_le);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        tel_le = new QLineEdit(centralwidget);
        tel_le->setObjectName(QString::fromUtf8("tel_le"));

        horizontalLayout_5->addWidget(tel_le);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        head_rb = new QRadioButton(centralwidget);
        head_rb->setObjectName(QString::fromUtf8("head_rb"));

        verticalLayout->addWidget(head_rb);

        dent_rb = new QRadioButton(centralwidget);
        dent_rb->setObjectName(QString::fromUtf8("dent_rb"));

        verticalLayout->addWidget(dent_rb);

        face_rb = new QRadioButton(centralwidget);
        face_rb->setObjectName(QString::fromUtf8("face_rb"));

        verticalLayout->addWidget(face_rb);

        anim_rb = new QRadioButton(centralwidget);
        anim_rb->setObjectName(QString::fromUtf8("anim_rb"));

        verticalLayout->addWidget(anim_rb);

        prod_rb = new QRadioButton(centralwidget);
        prod_rb->setObjectName(QString::fromUtf8("prod_rb"));

        verticalLayout->addWidget(prod_rb);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(verticalLayout_2);

        UserCreator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserCreator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 291, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        UserCreator->setMenuBar(menubar);
        statusbar = new QStatusBar(UserCreator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UserCreator->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(UserCreator);

        QMetaObject::connectSlotsByName(UserCreator);
    } // setupUi

    void retranslateUi(QMainWindow *UserCreator)
    {
        UserCreator->setWindowTitle(QApplication::translate("UserCreator", "MainWindow", nullptr));
        label->setText(QApplication::translate("UserCreator", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("UserCreator", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("UserCreator", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_4->setText(QApplication::translate("UserCreator", "\345\247\223\345\220\215", nullptr));
        label_5->setText(QApplication::translate("UserCreator", "\347\224\265\350\257\235", nullptr));
        label_6->setText(QApplication::translate("UserCreator", "\351\200\211\346\213\251\346\235\203\351\231\220\357\274\232", nullptr));
        head_rb->setText(QApplication::translate("UserCreator", "\345\244\264\345\275\261\346\265\213\351\207\217", nullptr));
        dent_rb->setText(QApplication::translate("UserCreator", "3D\347\211\231\346\250\241", nullptr));
        face_rb->setText(QApplication::translate("UserCreator", "3D\351\235\242\351\203\250", nullptr));
        anim_rb->setText(QApplication::translate("UserCreator", "\345\212\250\347\224\273\346\226\271\346\241\210", nullptr));
        prod_rb->setText(QApplication::translate("UserCreator", "\344\270\213\345\215\225\345\210\266\344\275\234", nullptr));
        pushButton->setText(QApplication::translate("UserCreator", "\345\210\233\345\273\272", nullptr));
        menu->setTitle(QApplication::translate("UserCreator", "\345\210\233\345\273\272\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserCreator: public Ui_UserCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCREATOR_H
