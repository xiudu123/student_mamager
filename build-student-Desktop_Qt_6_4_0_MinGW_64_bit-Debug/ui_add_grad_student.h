/********************************************************************************
** Form generated from reading UI file 'add_grad_student.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_GRAD_STUDENT_H
#define UI_ADD_GRAD_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_grad_student
{
public:
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLabel *label;
    QLineEdit *line_name;
    QLabel *label_3;
    QSpinBox *sb_age;
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *rb_man;
    QRadioButton *rb_woman;
    QLabel *label_4;
    QLineEdit *line_num;
    QLabel *label_6;
    QLineEdit *line_math;
    QLabel *label_7;
    QLineEdit *line_English;
    QLabel *label_8;
    QLineEdit *line_C;
    QLabel *label_17;
    QLineEdit *line_research_directions;
    QWidget *widget_4;
    QGridLayout *gridLayout_8;
    QLineEdit *line_num_teacher;
    QLineEdit *line_name_teacher;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_22;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QPushButton *btn_Confirm;
    QPushButton *btn_cancel;

    void setupUi(QDialog *add_grad_student)
    {
        if (add_grad_student->objectName().isEmpty())
            add_grad_student->setObjectName("add_grad_student");
        add_grad_student->resize(724, 513);
        gridLayout_7 = new QGridLayout(add_grad_student);
        gridLayout_7->setObjectName("gridLayout_7");
        label_5 = new QLabel(add_grad_student);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(16777215, 50));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_5, 0, 0, 1, 2);

        widget_2 = new QWidget(add_grad_student);
        widget_2->setObjectName("widget_2");
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName("formLayout");
        label_9 = new QLabel(widget_2);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label_9);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setMaximumSize(QSize(50, 20));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        line_name = new QLineEdit(widget_2);
        line_name->setObjectName("line_name");
        line_name->setMaxLength(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, line_name);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(50, 20));
        label_3->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        sb_age = new QSpinBox(widget_2);
        sb_age->setObjectName("sb_age");

        formLayout->setWidget(2, QFormLayout::FieldRole, sb_age);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 20));
        label_2->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

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


        formLayout->setWidget(3, QFormLayout::FieldRole, widget);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(50, 20));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        line_num = new QLineEdit(widget_2);
        line_num->setObjectName("line_num");
        line_num->setMaxLength(20);

        formLayout->setWidget(4, QFormLayout::FieldRole, line_num);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(50, 20));
        label_6->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        line_math = new QLineEdit(widget_2);
        line_math->setObjectName("line_math");
        line_math->setMaxLength(3);

        formLayout->setWidget(5, QFormLayout::FieldRole, line_math);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(50, 20));
        label_7->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        line_English = new QLineEdit(widget_2);
        line_English->setObjectName("line_English");
        line_English->setMaxLength(3);

        formLayout->setWidget(6, QFormLayout::FieldRole, line_English);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(50, 20));
        label_8->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        line_C = new QLineEdit(widget_2);
        line_C->setObjectName("line_C");
        line_C->setMaxLength(3);

        formLayout->setWidget(7, QFormLayout::FieldRole, line_C);

        label_17 = new QLabel(widget_2);
        label_17->setObjectName("label_17");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_17);

        line_research_directions = new QLineEdit(widget_2);
        line_research_directions->setObjectName("line_research_directions");

        formLayout->setWidget(8, QFormLayout::FieldRole, line_research_directions);


        gridLayout_7->addWidget(widget_2, 1, 0, 1, 1);

        widget_4 = new QWidget(add_grad_student);
        widget_4->setObjectName("widget_4");
        gridLayout_8 = new QGridLayout(widget_4);
        gridLayout_8->setObjectName("gridLayout_8");
        line_num_teacher = new QLineEdit(widget_4);
        line_num_teacher->setObjectName("line_num_teacher");
        line_num_teacher->setMaxLength(20);

        gridLayout_8->addWidget(line_num_teacher, 2, 1, 1, 1);

        line_name_teacher = new QLineEdit(widget_4);
        line_name_teacher->setObjectName("line_name_teacher");
        line_name_teacher->setMaxLength(10);

        gridLayout_8->addWidget(line_name_teacher, 1, 1, 1, 1);

        label_19 = new QLabel(widget_4);
        label_19->setObjectName("label_19");
        label_19->setMaximumSize(QSize(50, 20));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_19, 2, 0, 1, 1);

        label_18 = new QLabel(widget_4);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_18, 0, 0, 1, 2);

        label_22 = new QLabel(widget_4);
        label_22->setObjectName("label_22");
        label_22->setMaximumSize(QSize(50, 20));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_22, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_8->addItem(verticalSpacer, 3, 1, 1, 1);


        gridLayout_7->addWidget(widget_4, 1, 1, 1, 1);

        widget_3 = new QWidget(add_grad_student);
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


        gridLayout_7->addWidget(widget_3, 2, 0, 1, 2);


        retranslateUi(add_grad_student);

        QMetaObject::connectSlotsByName(add_grad_student);
    } // setupUi

    void retranslateUi(QDialog *add_grad_student)
    {
        add_grad_student->setWindowTitle(QCoreApplication::translate("add_grad_student", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("add_grad_student", "\350\257\267\350\276\223\345\205\245\346\267\273\345\212\240\347\240\224\347\251\266\347\224\237\347\232\204\344\277\241\346\201\257", nullptr));
        label_9->setText(QCoreApplication::translate("add_grad_student", "\347\240\224\347\251\266\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("add_grad_student", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("add_grad_student", "\345\271\264\351\276\204", nullptr));
        label_2->setText(QCoreApplication::translate("add_grad_student", "\346\200\247\345\210\253", nullptr));
        rb_man->setText(QCoreApplication::translate("add_grad_student", "\347\224\267", nullptr));
        rb_woman->setText(QCoreApplication::translate("add_grad_student", "\345\245\263", nullptr));
        label_4->setText(QCoreApplication::translate("add_grad_student", "\347\274\226\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("add_grad_student", "\351\253\230\346\225\260\346\210\220\347\273\251", nullptr));
        label_7->setText(QCoreApplication::translate("add_grad_student", "\350\213\261\350\257\255\346\210\220\347\273\251", nullptr));
        label_8->setText(QCoreApplication::translate("add_grad_student", "C++\346\210\220\347\273\251", nullptr));
        label_17->setText(QCoreApplication::translate("add_grad_student", "\347\240\224\347\251\266\346\226\271\345\220\221", nullptr));
        label_19->setText(QCoreApplication::translate("add_grad_student", "\347\274\226\345\217\267", nullptr));
        label_18->setText(QCoreApplication::translate("add_grad_student", "\345\257\274\345\270\210\344\277\241\346\201\257", nullptr));
        label_22->setText(QCoreApplication::translate("add_grad_student", "\345\247\223\345\220\215", nullptr));
        btn_Confirm->setText(QCoreApplication::translate("add_grad_student", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("add_grad_student", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_grad_student: public Ui_add_grad_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_GRAD_STUDENT_H
