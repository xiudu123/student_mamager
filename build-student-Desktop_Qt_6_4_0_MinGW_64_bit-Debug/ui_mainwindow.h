/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *Loin_account;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *Loin_password;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *Login_Succee;
    QPushButton *Login_Cancel;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QRadioButton *login_teacher;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *login_student;
    QRadioButton *login_admin;
    QRadioButton *login_grad_student;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 265);
        MainWindow->setMinimumSize(QSize(400, 265));
        MainWindow->setMaximumSize(QSize(400, 265));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget_3, 0, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(widget_2);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        Loin_account = new QLineEdit(widget_2);
        Loin_account->setObjectName("Loin_account");

        gridLayout_2->addWidget(Loin_account, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        Loin_password = new QLineEdit(widget_2);
        Loin_password->setObjectName("Loin_password");
        Loin_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        Loin_password->setFrame(true);
        Loin_password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(Loin_password, 1, 2, 1, 1);


        gridLayout_5->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        Login_Succee = new QPushButton(widget);
        Login_Succee->setObjectName("Login_Succee");

        gridLayout->addWidget(Login_Succee, 0, 0, 1, 1);

        Login_Cancel = new QPushButton(widget);
        Login_Cancel->setObjectName("Login_Cancel");

        gridLayout->addWidget(Login_Cancel, 0, 1, 1, 1);


        gridLayout_5->addWidget(widget, 3, 0, 1, 1);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 50, 0, 0);
        login_teacher = new QRadioButton(widget_4);
        login_teacher->setObjectName("login_teacher");

        gridLayout_4->addWidget(login_teacher, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        login_student = new QRadioButton(widget_4);
        login_student->setObjectName("login_student");

        gridLayout_4->addWidget(login_student, 0, 1, 1, 1);

        login_admin = new QRadioButton(widget_4);
        login_admin->setObjectName("login_admin");

        gridLayout_4->addWidget(login_admin, 0, 4, 1, 1);

        login_grad_student = new QRadioButton(widget_4);
        login_grad_student->setObjectName("login_grad_student");

        gridLayout_4->addWidget(login_grad_student, 0, 2, 1, 1);


        gridLayout_5->addWidget(widget_4, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        Loin_account->setText(QCoreApplication::translate("MainWindow", "\351\224\210\346\270\216", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        Loin_password->setText(QCoreApplication::translate("MainWindow", "123456", nullptr));
        Loin_password->setPlaceholderText(QString());
        Login_Succee->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        Login_Cancel->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        login_teacher->setText(QCoreApplication::translate("MainWindow", "\346\225\231\345\270\210\347\231\273\345\275\225", nullptr));
        login_student->setText(QCoreApplication::translate("MainWindow", "\346\234\254\347\247\221\347\224\237\347\231\273\345\275\225", nullptr));
        login_admin->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        login_grad_student->setText(QCoreApplication::translate("MainWindow", "\347\240\224\347\251\266\347\224\237\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
