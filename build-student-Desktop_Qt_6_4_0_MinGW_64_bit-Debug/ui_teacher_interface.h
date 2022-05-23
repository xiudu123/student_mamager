/********************************************************************************
** Form generated from reading UI file 'teacher_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_INTERFACE_H
#define UI_TEACHER_INTERFACE_H

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

class Ui_teacher_interface
{
public:
    QGridLayout *gridLayout_4;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_cancel;
    QPushButton *ctn_Confirm;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *line_num;
    QLineEdit *line_department;
    QLabel *label_7;
    QLineEdit *line_job;
    QLabel *label_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *line_name;
    QLineEdit *line_sex;
    QLineEdit *line_age;

    void setupUi(QDialog *teacher_interface)
    {
        if (teacher_interface->objectName().isEmpty())
            teacher_interface->setObjectName("teacher_interface");
        teacher_interface->resize(509, 323);
        gridLayout_4 = new QGridLayout(teacher_interface);
        gridLayout_4->setObjectName("gridLayout_4");
        label = new QLabel(teacher_interface);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(teacher_interface);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(btn_cancel, 0, 1, 1, 1);

        ctn_Confirm = new QPushButton(widget);
        ctn_Confirm->setObjectName("ctn_Confirm");
        ctn_Confirm->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(ctn_Confirm, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget, 2, 0, 1, 1);

        widget_2 = new QWidget(teacher_interface);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(50, 0));
        label_5->setMaximumSize(QSize(50, 16777215));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 3, 1, 1, 1);

        line_num = new QLineEdit(widget_2);
        line_num->setObjectName("line_num");
        line_num->setMaximumSize(QSize(400, 16777215));
        line_num->setMaxLength(20);

        gridLayout_2->addWidget(line_num, 3, 2, 1, 2);

        line_department = new QLineEdit(widget_2);
        line_department->setObjectName("line_department");
        line_department->setMaximumSize(QSize(400, 16777215));
        line_department->setReadOnly(true);

        gridLayout_2->addWidget(line_department, 5, 2, 1, 2);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(50, 0));
        label_7->setMaximumSize(QSize(50, 16777215));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 5, 1, 1, 1);

        line_job = new QLineEdit(widget_2);
        line_job->setObjectName("line_job");
        line_job->setMaximumSize(QSize(400, 16777215));
        line_job->setReadOnly(true);

        gridLayout_2->addWidget(line_job, 4, 2, 1, 2);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setMaximumSize(QSize(50, 16777215));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 2, 1, 1, 2);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setMaximumSize(QSize(50, 16777215));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(50, 0));
        label_6->setMaximumSize(QSize(50, 16777215));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 4, 1, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(50, 0));
        label_3->setMaximumSize(QSize(50, 16777215));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 4, 1, 1);

        line_name = new QLineEdit(widget_2);
        line_name->setObjectName("line_name");
        line_name->setMinimumSize(QSize(0, 0));
        line_name->setMaximumSize(QSize(400, 16777215));
        line_name->setMaxLength(10);

        gridLayout_2->addWidget(line_name, 0, 3, 1, 1);

        line_sex = new QLineEdit(widget_2);
        line_sex->setObjectName("line_sex");
        line_sex->setReadOnly(true);

        gridLayout_2->addWidget(line_sex, 2, 3, 1, 1);

        line_age = new QLineEdit(widget_2);
        line_age->setObjectName("line_age");
        line_age->setReadOnly(true);

        gridLayout_2->addWidget(line_age, 1, 3, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(teacher_interface);

        QMetaObject::connectSlotsByName(teacher_interface);
    } // setupUi

    void retranslateUi(QDialog *teacher_interface)
    {
        teacher_interface->setWindowTitle(QCoreApplication::translate("teacher_interface", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teacher_interface", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\345\222\214\347\274\226\345\217\267\346\237\245\347\234\213\350\200\201\345\270\210\344\277\241\346\201\257", nullptr));
        btn_cancel->setText(QCoreApplication::translate("teacher_interface", "\345\217\226\346\266\210", nullptr));
        ctn_Confirm->setText(QCoreApplication::translate("teacher_interface", "\347\241\256\350\256\244", nullptr));
        label_5->setText(QCoreApplication::translate("teacher_interface", "\347\274\226\345\217\267", nullptr));
        label_7->setText(QCoreApplication::translate("teacher_interface", "\351\203\250\351\227\250", nullptr));
        label_4->setText(QCoreApplication::translate("teacher_interface", "\346\200\247\345\210\253", nullptr));
        label_2->setText(QCoreApplication::translate("teacher_interface", "\345\247\223\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("teacher_interface", "\350\201\214\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("teacher_interface", "\345\271\264\351\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacher_interface: public Ui_teacher_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_INTERFACE_H
