/********************************************************************************
** Form generated from reading UI file 'add_student.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STUDENT_H
#define UI_ADD_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_student
{
public:
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *line_name;
    QLabel *label_3;
    QSpinBox *sb_age;
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *rb_man;
    QRadioButton *rb_woman;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *line_num;
    QLabel *label_6;
    QLineEdit *line_math;
    QLabel *label_7;
    QLineEdit *line_English;
    QLabel *label_8;
    QLineEdit *line_C;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QPushButton *btn_Confirm;
    QPushButton *btn_cancel;

    void setupUi(QDialog *add_student)
    {
        if (add_student->objectName().isEmpty())
            add_student->setObjectName("add_student");
        add_student->resize(500, 370);
        add_student->setMinimumSize(QSize(500, 300));
        gridLayout_4 = new QGridLayout(add_student);
        gridLayout_4->setObjectName("gridLayout_4");
        label_5 = new QLabel(add_student);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(16777215, 50));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        widget_2 = new QWidget(add_student);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setMaximumSize(QSize(50, 20));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        line_name = new QLineEdit(widget_2);
        line_name->setObjectName("line_name");
        line_name->setMaxLength(10);

        gridLayout_2->addWidget(line_name, 0, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(50, 20));
        label_3->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        sb_age = new QSpinBox(widget_2);
        sb_age->setObjectName("sb_age");

        gridLayout_2->addWidget(sb_age, 1, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 20));
        label_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        widget->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rb_man = new QRadioButton(widget);
        rb_man->setObjectName("rb_man");
        rb_man->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(rb_man, 0, 0, 1, 1);

        rb_woman = new QRadioButton(widget);
        rb_woman->setObjectName("rb_woman");
        rb_woman->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(rb_woman, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 2, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(50, 20));
        label_4->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        line_num = new QLineEdit(widget_2);
        line_num->setObjectName("line_num");
        line_num->setMaxLength(20);

        gridLayout_2->addWidget(line_num, 3, 1, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(50, 20));
        label_6->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        line_math = new QLineEdit(widget_2);
        line_math->setObjectName("line_math");
        line_math->setMaxLength(3);

        gridLayout_2->addWidget(line_math, 4, 1, 1, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(50, 20));
        label_7->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        line_English = new QLineEdit(widget_2);
        line_English->setObjectName("line_English");
        line_English->setMaxLength(3);

        gridLayout_2->addWidget(line_English, 5, 1, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(50, 20));
        label_8->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        line_C = new QLineEdit(widget_2);
        line_C->setObjectName("line_C");
        line_C->setMaxLength(3);

        gridLayout_2->addWidget(line_C, 6, 1, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(add_student);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        btn_Confirm = new QPushButton(widget_3);
        btn_Confirm->setObjectName("btn_Confirm");
        btn_Confirm->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_Confirm, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget_3);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_3, 2, 0, 1, 1);


        retranslateUi(add_student);

        QMetaObject::connectSlotsByName(add_student);
    } // setupUi

    void retranslateUi(QDialog *add_student)
    {
        add_student->setWindowTitle(QCoreApplication::translate("add_student", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_5->setText(QCoreApplication::translate("add_student", "\350\257\267\350\276\223\345\205\245\346\267\273\345\212\240\345\255\246\347\224\237\347\232\204\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("add_student", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("add_student", "\345\271\264\351\276\204", nullptr));
        label_2->setText(QCoreApplication::translate("add_student", "\346\200\247\345\210\253", nullptr));
        rb_man->setText(QCoreApplication::translate("add_student", "\347\224\267", nullptr));
        rb_woman->setText(QCoreApplication::translate("add_student", "\345\245\263", nullptr));
        label_4->setText(QCoreApplication::translate("add_student", "\347\274\226\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("add_student", "\351\253\230\346\225\260\346\210\220\347\273\251", nullptr));
        label_7->setText(QCoreApplication::translate("add_student", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        label_8->setText(QCoreApplication::translate("add_student", "C++\346\210\220\347\273\251", nullptr));
        btn_Confirm->setText(QCoreApplication::translate("add_student", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("add_student", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_student: public Ui_add_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUDENT_H
