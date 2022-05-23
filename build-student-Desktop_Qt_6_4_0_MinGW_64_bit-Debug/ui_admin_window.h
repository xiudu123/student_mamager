/********************************************************************************
** Form generated from reading UI file 'admin_window.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_WINDOW_H
#define UI_ADMIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_window
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QPushButton *btn_total_add;
    QPushButton *btn_total_view;
    QPushButton *btn_total_delet;
    QPushButton *btn_total_modify;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_admin_Confirm;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QRadioButton *rb_student;
    QRadioButton *rb_grad_student;
    QRadioButton *rb_teacher;
    QPushButton *pushButton_2;
    QPushButton *btn_clear;

    void setupUi(QDialog *admin_window)
    {
        if (admin_window->objectName().isEmpty())
            admin_window->setObjectName("admin_window");
        admin_window->resize(634, 469);
        gridLayout_4 = new QGridLayout(admin_window);
        gridLayout_4->setObjectName("gridLayout_4");
        widget = new QWidget(admin_window);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(14);
        widget->setFont(font);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_4->addWidget(widget, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        widget_2 = new QWidget(admin_window);
        widget_2->setObjectName("widget_2");
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_total_add = new QPushButton(widget_2);
        btn_total_add->setObjectName("btn_total_add");
        btn_total_add->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_total_add, 1, 0, 1, 1);

        btn_total_view = new QPushButton(widget_2);
        btn_total_view->setObjectName("btn_total_view");
        btn_total_view->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_total_view, 6, 0, 1, 1);

        btn_total_delet = new QPushButton(widget_2);
        btn_total_delet->setObjectName("btn_total_delet");
        btn_total_delet->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_total_delet, 2, 0, 1, 1);

        btn_total_modify = new QPushButton(widget_2);
        btn_total_modify->setObjectName("btn_total_modify");
        btn_total_modify->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_total_modify, 3, 0, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        btn_admin_Confirm = new QPushButton(admin_window);
        btn_admin_Confirm->setObjectName("btn_admin_Confirm");
        btn_admin_Confirm->setMinimumSize(QSize(0, 50));

        gridLayout_4->addWidget(btn_admin_Confirm, 2, 0, 1, 1);

        widget_3 = new QWidget(admin_window);
        widget_3->setObjectName("widget_3");
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        rb_student = new QRadioButton(widget_3);
        rb_student->setObjectName("rb_student");

        gridLayout_2->addWidget(rb_student, 0, 0, 1, 1);

        rb_grad_student = new QRadioButton(widget_3);
        rb_grad_student->setObjectName("rb_grad_student");

        gridLayout_2->addWidget(rb_grad_student, 0, 1, 1, 1);

        rb_teacher = new QRadioButton(widget_3);
        rb_teacher->setObjectName("rb_teacher");

        gridLayout_2->addWidget(rb_teacher, 0, 2, 1, 1);


        gridLayout_4->addWidget(widget_3, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(admin_window);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 50));

        gridLayout_4->addWidget(pushButton_2, 2, 2, 1, 1);

        btn_clear = new QPushButton(admin_window);
        btn_clear->setObjectName("btn_clear");
        btn_clear->setMinimumSize(QSize(0, 50));

        gridLayout_4->addWidget(btn_clear, 0, 2, 1, 1);


        retranslateUi(admin_window);

        QMetaObject::connectSlotsByName(admin_window);
    } // setupUi

    void retranslateUi(QDialog *admin_window)
    {
        admin_window->setWindowTitle(QCoreApplication::translate("admin_window", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        label_3->setText(QCoreApplication::translate("admin_window", "\351\224\210\346\270\216", nullptr));
        label_2->setText(QCoreApplication::translate("admin_window", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("admin_window", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        btn_total_add->setText(QCoreApplication::translate("admin_window", "\346\267\273\345\212\240\344\272\272\345\221\230", nullptr));
        btn_total_view->setText(QCoreApplication::translate("admin_window", "\346\237\245\347\234\213\344\272\272\345\221\230", nullptr));
        btn_total_delet->setText(QCoreApplication::translate("admin_window", "\345\210\240\351\231\244\344\272\272\345\221\230", nullptr));
        btn_total_modify->setText(QCoreApplication::translate("admin_window", "\344\277\256\346\224\271\344\272\272\345\221\230", nullptr));
        btn_admin_Confirm->setText(QCoreApplication::translate("admin_window", "\344\277\235\345\255\230", nullptr));
        rb_student->setText(QCoreApplication::translate("admin_window", "\346\234\254\347\247\221\347\224\237", nullptr));
        rb_grad_student->setText(QCoreApplication::translate("admin_window", "\347\240\224\347\251\266\347\224\237", nullptr));
        rb_teacher->setText(QCoreApplication::translate("admin_window", "\346\225\231\345\270\210", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin_window", "\351\200\200\345\207\272", nullptr));
        btn_clear->setText(QCoreApplication::translate("admin_window", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_window: public Ui_admin_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_WINDOW_H
