/********************************************************************************
** Form generated from reading UI file 'grad_student_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAD_STUDENT_INTERFACE_H
#define UI_GRAD_STUDENT_INTERFACE_H

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

class Ui_grad_student_interface
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QPushButton *btn_eixt;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *line_English_rank;
    QLineEdit *line_English_grade;
    QLineEdit *line_grade_rank;
    QLineEdit *line_name;
    QLineEdit *line_C_grade;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *line_num;
    QLineEdit *line_math_rank;
    QLabel *label_4;
    QLineEdit *line_C_rank;
    QLabel *label_9;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_11;
    QLineEdit *line_sex;
    QLabel *label_2;
    QLineEdit *line_grade;
    QLineEdit *line_math_grade;
    QLabel *label_8;
    QLineEdit *line_age;
    QLabel *label_21;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_20;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_17;
    QLineEdit *line_name_teacher;
    QLabel *label_19;
    QLineEdit *line_age_teacher;
    QLabel *label_16;
    QLineEdit *line_sex_teacher;
    QLabel *label_14;
    QLineEdit *line_num_teacher;
    QLabel *label_18;
    QLineEdit *line_job_teacher;
    QLabel *label_15;
    QLineEdit *line_department_teacher;
    QPushButton *pushButton;

    void setupUi(QDialog *grad_student_interface)
    {
        if (grad_student_interface->objectName().isEmpty())
            grad_student_interface->setObjectName("grad_student_interface");
        grad_student_interface->resize(679, 462);
        gridLayout_2 = new QGridLayout(grad_student_interface);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(grad_student_interface);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        btn_eixt = new QPushButton(grad_student_interface);
        btn_eixt->setObjectName("btn_eixt");

        gridLayout_2->addWidget(btn_eixt, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(75, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        widget = new QWidget(grad_student_interface);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        line_English_rank = new QLineEdit(widget);
        line_English_rank->setObjectName("line_English_rank");
        line_English_rank->setMaximumSize(QSize(100, 16777215));
        line_English_rank->setAlignment(Qt::AlignCenter);
        line_English_rank->setReadOnly(true);

        gridLayout->addWidget(line_English_rank, 9, 1, 1, 1);

        line_English_grade = new QLineEdit(widget);
        line_English_grade->setObjectName("line_English_grade");
        line_English_grade->setMaximumSize(QSize(100, 16777215));
        line_English_grade->setAlignment(Qt::AlignCenter);
        line_English_grade->setReadOnly(true);

        gridLayout->addWidget(line_English_grade, 8, 1, 1, 4);

        line_grade_rank = new QLineEdit(widget);
        line_grade_rank->setObjectName("line_grade_rank");
        line_grade_rank->setMaximumSize(QSize(100, 16777215));
        line_grade_rank->setAlignment(Qt::AlignCenter);
        line_grade_rank->setReadOnly(true);

        gridLayout->addWidget(line_grade_rank, 13, 1, 1, 1);

        line_name = new QLineEdit(widget);
        line_name->setObjectName("line_name");
        line_name->setMaximumSize(QSize(100, 16777215));
        line_name->setMaxLength(10);
        line_name->setAlignment(Qt::AlignCenter);
        line_name->setReadOnly(false);

        gridLayout->addWidget(line_name, 2, 1, 1, 4);

        line_C_grade = new QLineEdit(widget);
        line_C_grade->setObjectName("line_C_grade");
        line_C_grade->setMaximumSize(QSize(100, 16777215));
        line_C_grade->setAlignment(Qt::AlignCenter);
        line_C_grade->setReadOnly(true);

        gridLayout->addWidget(line_C_grade, 10, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(100, 0));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 9, 0, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(100, 0));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 12, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        line_num = new QLineEdit(widget);
        line_num->setObjectName("line_num");
        line_num->setMaximumSize(QSize(100, 16777215));
        line_num->setMaxLength(20);
        line_num->setAlignment(Qt::AlignCenter);
        line_num->setReadOnly(false);

        gridLayout->addWidget(line_num, 5, 1, 1, 4);

        line_math_rank = new QLineEdit(widget);
        line_math_rank->setObjectName("line_math_rank");
        line_math_rank->setMaximumSize(QSize(100, 16777215));
        line_math_rank->setAlignment(Qt::AlignCenter);
        line_math_rank->setReadOnly(true);

        gridLayout->addWidget(line_math_rank, 7, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        line_C_rank = new QLineEdit(widget);
        line_C_rank->setObjectName("line_C_rank");
        line_C_rank->setMaximumSize(QSize(100, 16777215));
        line_C_rank->setAlignment(Qt::AlignCenter);
        line_C_rank->setReadOnly(true);

        gridLayout->addWidget(line_C_rank, 11, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(100, 0));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 13, 0, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(100, 0));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 7, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 11, 0, 1, 1);

        line_sex = new QLineEdit(widget);
        line_sex->setObjectName("line_sex");
        line_sex->setMaximumSize(QSize(100, 16777215));
        line_sex->setAlignment(Qt::AlignCenter);
        line_sex->setReadOnly(true);

        gridLayout->addWidget(line_sex, 4, 1, 1, 4);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        line_grade = new QLineEdit(widget);
        line_grade->setObjectName("line_grade");
        line_grade->setMaximumSize(QSize(100, 16777215));
        line_grade->setAlignment(Qt::AlignCenter);
        line_grade->setReadOnly(true);

        gridLayout->addWidget(line_grade, 12, 1, 1, 1);

        line_math_grade = new QLineEdit(widget);
        line_math_grade->setObjectName("line_math_grade");
        line_math_grade->setMaximumSize(QSize(100, 16777215));
        line_math_grade->setAlignment(Qt::AlignCenter);
        line_math_grade->setReadOnly(true);

        gridLayout->addWidget(line_math_grade, 6, 1, 1, 4);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 10, 0, 1, 1);

        line_age = new QLineEdit(widget);
        line_age->setObjectName("line_age");
        line_age->setMaximumSize(QSize(100, 16777215));
        line_age->setAlignment(Qt::AlignCenter);
        line_age->setReadOnly(true);

        gridLayout->addWidget(line_age, 3, 1, 1, 4);

        label_21 = new QLabel(widget);
        label_21->setObjectName("label_21");

        gridLayout->addWidget(label_21, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget, 1, 1, 1, 2);

        widget_3 = new QWidget(grad_student_interface);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label_20 = new QLabel(widget_3);
        label_20->setObjectName("label_20");
        label_20->setMaximumSize(QSize(16777215, 50));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_20, 1, 0, 1, 1);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setObjectName("gridLayout_4");
        label_17 = new QLabel(widget_2);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(50, 0));
        label_17->setMaximumSize(QSize(50, 16777215));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_17, 0, 0, 1, 1);

        line_name_teacher = new QLineEdit(widget_2);
        line_name_teacher->setObjectName("line_name_teacher");
        line_name_teacher->setMinimumSize(QSize(0, 0));
        line_name_teacher->setMaximumSize(QSize(400, 16777215));
        line_name_teacher->setMaxLength(10);
        line_name_teacher->setReadOnly(true);

        gridLayout_4->addWidget(line_name_teacher, 0, 1, 1, 1);

        label_19 = new QLabel(widget_2);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(50, 0));
        label_19->setMaximumSize(QSize(50, 16777215));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_19, 1, 0, 1, 1);

        line_age_teacher = new QLineEdit(widget_2);
        line_age_teacher->setObjectName("line_age_teacher");
        line_age_teacher->setReadOnly(true);

        gridLayout_4->addWidget(line_age_teacher, 1, 1, 1, 1);

        label_16 = new QLabel(widget_2);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(50, 0));
        label_16->setMaximumSize(QSize(50, 16777215));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_16, 2, 0, 1, 1);

        line_sex_teacher = new QLineEdit(widget_2);
        line_sex_teacher->setObjectName("line_sex_teacher");
        line_sex_teacher->setReadOnly(true);

        gridLayout_4->addWidget(line_sex_teacher, 2, 1, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(50, 0));
        label_14->setMaximumSize(QSize(50, 16777215));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_14, 3, 0, 1, 1);

        line_num_teacher = new QLineEdit(widget_2);
        line_num_teacher->setObjectName("line_num_teacher");
        line_num_teacher->setMaximumSize(QSize(400, 16777215));
        line_num_teacher->setMaxLength(20);
        line_num_teacher->setReadOnly(true);

        gridLayout_4->addWidget(line_num_teacher, 3, 1, 1, 1);

        label_18 = new QLabel(widget_2);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(50, 0));
        label_18->setMaximumSize(QSize(50, 16777215));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_18, 4, 0, 1, 1);

        line_job_teacher = new QLineEdit(widget_2);
        line_job_teacher->setObjectName("line_job_teacher");
        line_job_teacher->setMaximumSize(QSize(400, 16777215));
        line_job_teacher->setReadOnly(true);

        gridLayout_4->addWidget(line_job_teacher, 4, 1, 1, 1);

        label_15 = new QLabel(widget_2);
        label_15->setObjectName("label_15");
        label_15->setMinimumSize(QSize(50, 0));
        label_15->setMaximumSize(QSize(50, 16777215));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_15, 5, 0, 1, 1);

        line_department_teacher = new QLineEdit(widget_2);
        line_department_teacher->setObjectName("line_department_teacher");
        line_department_teacher->setMaximumSize(QSize(400, 16777215));
        line_department_teacher->setReadOnly(true);

        gridLayout_4->addWidget(line_department_teacher, 5, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 2, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 1, 3, 1, 1);

        pushButton = new QPushButton(grad_student_interface);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(pushButton, 2, 1, 1, 3);


        retranslateUi(grad_student_interface);

        QMetaObject::connectSlotsByName(grad_student_interface);
    } // setupUi

    void retranslateUi(QDialog *grad_student_interface)
    {
        grad_student_interface->setWindowTitle(QCoreApplication::translate("grad_student_interface", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("grad_student_interface", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\247\223\345\220\215\345\222\214\347\274\226\345\217\267\346\237\245\347\234\213", nullptr));
        btn_eixt->setText(QCoreApplication::translate("grad_student_interface", "\351\200\200\345\207\272", nullptr));
        label_7->setText(QCoreApplication::translate("grad_student_interface", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        label_12->setText(QCoreApplication::translate("grad_student_interface", "\350\213\261\350\257\255\346\216\222\345\220\215", nullptr));
        label_10->setText(QCoreApplication::translate("grad_student_interface", "\346\200\273\346\210\220\347\273\251", nullptr));
        label_3->setText(QCoreApplication::translate("grad_student_interface", "\345\271\264\351\276\204", nullptr));
        label_6->setText(QCoreApplication::translate("grad_student_interface", "\351\253\230\346\225\260\346\210\220\347\273\251", nullptr));
        label_4->setText(QCoreApplication::translate("grad_student_interface", "\346\200\247\345\210\253", nullptr));
        label_9->setText(QCoreApplication::translate("grad_student_interface", "\346\200\273\346\210\220\347\273\251\346\216\222\345\220\215", nullptr));
        label_13->setText(QCoreApplication::translate("grad_student_interface", "\351\253\230\346\225\260\346\216\222\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("grad_student_interface", "\347\274\226\345\217\267", nullptr));
        label_11->setText(QCoreApplication::translate("grad_student_interface", "C++\346\216\222\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("grad_student_interface", "\345\247\223\345\220\215", nullptr));
        label_8->setText(QCoreApplication::translate("grad_student_interface", "C++\346\210\220\347\273\251", nullptr));
        label_21->setText(QCoreApplication::translate("grad_student_interface", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_20->setText(QCoreApplication::translate("grad_student_interface", "\345\257\274\345\270\210\344\277\241\346\201\257", nullptr));
        label_17->setText(QCoreApplication::translate("grad_student_interface", "\345\247\223\345\220\215", nullptr));
        label_19->setText(QCoreApplication::translate("grad_student_interface", "\345\271\264\351\276\204", nullptr));
        label_16->setText(QCoreApplication::translate("grad_student_interface", "\346\200\247\345\210\253", nullptr));
        label_14->setText(QCoreApplication::translate("grad_student_interface", "\347\274\226\345\217\267", nullptr));
        label_18->setText(QCoreApplication::translate("grad_student_interface", "\350\201\214\347\247\260", nullptr));
        label_15->setText(QCoreApplication::translate("grad_student_interface", "\351\203\250\351\227\250", nullptr));
        pushButton->setText(QCoreApplication::translate("grad_student_interface", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grad_student_interface: public Ui_grad_student_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAD_STUDENT_INTERFACE_H
