/********************************************************************************
** Form generated from reading UI file 'modify_grad_student.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_GRAD_STUDENT_H
#define UI_MODIFY_GRAD_STUDENT_H

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

class Ui_modify_grad_student
{
public:
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *line_name_2;
    QLabel *label;
    QLineEdit *line_num_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *line_C;
    QLineEdit *line_English;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *line_math;
    QLabel *label_18;
    QLabel *label_14;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLineEdit *line_name_techer;
    QLabel *label_6;
    QLineEdit *line_num_teacher;
    QLabel *label_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QPushButton *btn_Comfire;
    QPushButton *btn_cancel;

    void setupUi(QDialog *modify_grad_student)
    {
        if (modify_grad_student->objectName().isEmpty())
            modify_grad_student->setObjectName("modify_grad_student");
        modify_grad_student->resize(627, 448);
        gridLayout_5 = new QGridLayout(modify_grad_student);
        gridLayout_5->setObjectName("gridLayout_5");
        widget = new QWidget(modify_grad_student);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        line_name_2 = new QLineEdit(widget);
        line_name_2->setObjectName("line_name_2");
        line_name_2->setMaxLength(10);

        gridLayout->addWidget(line_name_2, 1, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 2, 1, 1);

        line_num_2 = new QLineEdit(widget);
        line_num_2->setObjectName("line_num_2");
        line_num_2->setMaxLength(20);

        gridLayout->addWidget(line_num_2, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);


        gridLayout_5->addWidget(widget, 0, 0, 1, 2);

        widget_2 = new QWidget(modify_grad_student);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        line_C = new QLineEdit(widget_2);
        line_C->setObjectName("line_C");

        gridLayout_2->addWidget(line_C, 3, 1, 1, 1);

        line_English = new QLineEdit(widget_2);
        line_English->setObjectName("line_English");

        gridLayout_2->addWidget(line_English, 2, 1, 1, 1);

        label_16 = new QLabel(widget_2);
        label_16->setObjectName("label_16");

        gridLayout_2->addWidget(label_16, 1, 0, 1, 1);

        label_17 = new QLabel(widget_2);
        label_17->setObjectName("label_17");

        gridLayout_2->addWidget(label_17, 2, 0, 1, 1);

        line_math = new QLineEdit(widget_2);
        line_math->setObjectName("line_math");

        gridLayout_2->addWidget(line_math, 1, 1, 1, 1);

        label_18 = new QLabel(widget_2);
        label_18->setObjectName("label_18");

        gridLayout_2->addWidget(label_18, 3, 0, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 0, 1, 1, 1);


        gridLayout_5->addWidget(widget_2, 1, 0, 1, 1);

        widget_4 = new QWidget(modify_grad_student);
        widget_4->setObjectName("widget_4");
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        label_5 = new QLabel(widget_4);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        line_name_techer = new QLineEdit(widget_4);
        line_name_techer->setObjectName("line_name_techer");
        line_name_techer->setMaxLength(10);

        gridLayout_4->addWidget(line_name_techer, 1, 1, 1, 1);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 2, 0, 1, 1);

        line_num_teacher = new QLineEdit(widget_4);
        line_num_teacher->setObjectName("line_num_teacher");
        line_num_teacher->setMaxLength(20);

        gridLayout_4->addWidget(line_num_teacher, 2, 1, 1, 1);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 2);


        gridLayout_5->addWidget(widget_4, 1, 1, 1, 1);

        widget_3 = new QWidget(modify_grad_student);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        btn_Comfire = new QPushButton(widget_3);
        btn_Comfire->setObjectName("btn_Comfire");
        btn_Comfire->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_Comfire, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget_3);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_5->addWidget(widget_3, 2, 0, 1, 2);


        retranslateUi(modify_grad_student);

        QMetaObject::connectSlotsByName(modify_grad_student);
    } // setupUi

    void retranslateUi(QDialog *modify_grad_student)
    {
        modify_grad_student->setWindowTitle(QCoreApplication::translate("modify_grad_student", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("modify_grad_student", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("modify_grad_student", "\347\274\226\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("modify_grad_student", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\347\240\224\347\251\266\347\224\237\347\232\204\345\247\223\345\220\215\345\222\214\347\274\226\345\217\267", nullptr));
        label_16->setText(QCoreApplication::translate("modify_grad_student", "\351\253\230\346\225\260\346\210\220\347\273\251", nullptr));
        label_17->setText(QCoreApplication::translate("modify_grad_student", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        label_18->setText(QCoreApplication::translate("modify_grad_student", "C++\346\210\220\347\273\251", nullptr));
        label_14->setText(QCoreApplication::translate("modify_grad_student", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\344\277\241\346\201\257", nullptr));
        label_5->setText(QCoreApplication::translate("modify_grad_student", "\345\257\274\345\270\210\345\247\223\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("modify_grad_student", "\345\257\274\345\270\210\347\274\226\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("modify_grad_student", "\344\277\256\346\224\271\345\257\274\345\270\210\344\277\241\346\201\257", nullptr));
        btn_Comfire->setText(QCoreApplication::translate("modify_grad_student", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("modify_grad_student", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modify_grad_student: public Ui_modify_grad_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_GRAD_STUDENT_H
