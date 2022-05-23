/********************************************************************************
** Form generated from reading UI file 'student_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_INTERFACE_H
#define UI_STUDENT_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_interface
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *line_name;
    QLabel *label_6;
    QLineEdit *line_English_grade;
    QLabel *label_5;
    QLineEdit *line_grade_rank;
    QLineEdit *line_C_rank;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_12;
    QLineEdit *line_math_grade;
    QLineEdit *line_English_rank;
    QLineEdit *line_num;
    QLabel *label_11;
    QLineEdit *line_math_rank;
    QLineEdit *line_C_grade;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *line_sex;
    QLabel *label_8;
    QLineEdit *line_grade;
    QLabel *label_10;
    QLineEdit *line_age;
    QPushButton *btn_eixt;

    void setupUi(QDialog *student_interface)
    {
        if (student_interface->objectName().isEmpty())
            student_interface->setObjectName("student_interface");
        student_interface->resize(533, 439);
        gridLayout_2 = new QGridLayout(student_interface);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        pushButton = new QPushButton(student_interface);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(pushButton, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        label = new QLabel(student_interface);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        widget = new QWidget(student_interface);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        line_name = new QLineEdit(widget);
        line_name->setObjectName("line_name");
        line_name->setMaximumSize(QSize(100, 16777215));
        line_name->setMaxLength(10);
        line_name->setAlignment(Qt::AlignCenter);
        line_name->setReadOnly(false);

        gridLayout->addWidget(line_name, 0, 1, 1, 4);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        line_English_grade = new QLineEdit(widget);
        line_English_grade->setObjectName("line_English_grade");
        line_English_grade->setMaximumSize(QSize(100, 16777215));
        line_English_grade->setAlignment(Qt::AlignCenter);
        line_English_grade->setReadOnly(true);

        gridLayout->addWidget(line_English_grade, 6, 1, 1, 4);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        line_grade_rank = new QLineEdit(widget);
        line_grade_rank->setObjectName("line_grade_rank");
        line_grade_rank->setMaximumSize(QSize(100, 16777215));
        line_grade_rank->setAlignment(Qt::AlignCenter);
        line_grade_rank->setReadOnly(true);

        gridLayout->addWidget(line_grade_rank, 11, 1, 1, 1);

        line_C_rank = new QLineEdit(widget);
        line_C_rank->setObjectName("line_C_rank");
        line_C_rank->setMaximumSize(QSize(100, 16777215));
        line_C_rank->setAlignment(Qt::AlignCenter);
        line_C_rank->setReadOnly(true);

        gridLayout->addWidget(line_C_rank, 9, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(100, 0));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 11, 0, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(100, 0));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(100, 0));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 7, 0, 1, 1);

        line_math_grade = new QLineEdit(widget);
        line_math_grade->setObjectName("line_math_grade");
        line_math_grade->setMaximumSize(QSize(100, 16777215));
        line_math_grade->setAlignment(Qt::AlignCenter);
        line_math_grade->setReadOnly(true);

        gridLayout->addWidget(line_math_grade, 4, 1, 1, 4);

        line_English_rank = new QLineEdit(widget);
        line_English_rank->setObjectName("line_English_rank");
        line_English_rank->setMaximumSize(QSize(100, 16777215));
        line_English_rank->setAlignment(Qt::AlignCenter);
        line_English_rank->setReadOnly(true);

        gridLayout->addWidget(line_English_rank, 7, 1, 1, 1);

        line_num = new QLineEdit(widget);
        line_num->setObjectName("line_num");
        line_num->setMaximumSize(QSize(100, 16777215));
        line_num->setMaxLength(20);
        line_num->setAlignment(Qt::AlignCenter);
        line_num->setReadOnly(false);

        gridLayout->addWidget(line_num, 3, 1, 1, 4);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        line_math_rank = new QLineEdit(widget);
        line_math_rank->setObjectName("line_math_rank");
        line_math_rank->setMaximumSize(QSize(100, 16777215));
        line_math_rank->setAlignment(Qt::AlignCenter);
        line_math_rank->setReadOnly(true);

        gridLayout->addWidget(line_math_rank, 5, 1, 1, 1);

        line_C_grade = new QLineEdit(widget);
        line_C_grade->setObjectName("line_C_grade");
        line_C_grade->setMaximumSize(QSize(100, 16777215));
        line_C_grade->setAlignment(Qt::AlignCenter);
        line_C_grade->setReadOnly(true);

        gridLayout->addWidget(line_C_grade, 8, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        line_sex = new QLineEdit(widget);
        line_sex->setObjectName("line_sex");
        line_sex->setMaximumSize(QSize(100, 16777215));
        line_sex->setAlignment(Qt::AlignCenter);
        line_sex->setReadOnly(true);

        gridLayout->addWidget(line_sex, 2, 1, 1, 4);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        line_grade = new QLineEdit(widget);
        line_grade->setObjectName("line_grade");
        line_grade->setMaximumSize(QSize(100, 16777215));
        line_grade->setAlignment(Qt::AlignCenter);
        line_grade->setReadOnly(true);

        gridLayout->addWidget(line_grade, 10, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(100, 0));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        line_age = new QLineEdit(widget);
        line_age->setObjectName("line_age");
        line_age->setMaximumSize(QSize(100, 16777215));
        line_age->setAlignment(Qt::AlignCenter);
        line_age->setReadOnly(true);

        gridLayout->addWidget(line_age, 1, 1, 1, 4);


        gridLayout_2->addWidget(widget, 1, 1, 1, 1);

        btn_eixt = new QPushButton(student_interface);
        btn_eixt->setObjectName("btn_eixt");

        gridLayout_2->addWidget(btn_eixt, 0, 2, 1, 1);


        retranslateUi(student_interface);

        QMetaObject::connectSlotsByName(student_interface);
    } // setupUi

    void retranslateUi(QDialog *student_interface)
    {
        student_interface->setWindowTitle(QCoreApplication::translate("student_interface", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("student_interface", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("student_interface", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\345\222\214\347\274\226\345\217\267\346\237\245\347\234\213\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_6->setText(QCoreApplication::translate("student_interface", "\351\253\230\346\225\260\346\210\220\347\273\251", nullptr));
        label_5->setText(QCoreApplication::translate("student_interface", "\347\274\226\345\217\267", nullptr));
        label_9->setText(QCoreApplication::translate("student_interface", "\346\200\273\346\210\220\347\273\251\346\216\222\345\220\215", nullptr));
        label_13->setText(QCoreApplication::translate("student_interface", "\351\253\230\346\225\260\346\216\222\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("student_interface", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("student_interface", "\346\200\247\345\210\253", nullptr));
        label_12->setText(QCoreApplication::translate("student_interface", "\350\213\261\350\257\255\346\216\222\345\220\215", nullptr));
        label_11->setText(QCoreApplication::translate("student_interface", "C++\346\216\222\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("student_interface", "\345\271\264\351\276\204", nullptr));
        label_7->setText(QCoreApplication::translate("student_interface", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        label_8->setText(QCoreApplication::translate("student_interface", "C++\346\210\220\347\273\251", nullptr));
        label_10->setText(QCoreApplication::translate("student_interface", "\346\200\273\346\210\220\347\273\251", nullptr));
        btn_eixt->setText(QCoreApplication::translate("student_interface", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_interface: public Ui_student_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_INTERFACE_H
