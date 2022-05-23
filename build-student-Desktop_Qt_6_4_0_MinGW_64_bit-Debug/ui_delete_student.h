/********************************************************************************
** Form generated from reading UI file 'delete_student.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_STUDENT_H
#define UI_DELETE_STUDENT_H

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

class Ui_delete_student
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *line_name;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *line_num;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btn_Confirm;
    QPushButton *btn_cancel;

    void setupUi(QDialog *delete_student)
    {
        if (delete_student->objectName().isEmpty())
            delete_student->setObjectName("delete_student");
        delete_student->resize(400, 240);
        delete_student->setMinimumSize(QSize(400, 240));
        delete_student->setMaximumSize(QSize(400, 240));
        gridLayout_3 = new QGridLayout(delete_student);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(delete_student);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(delete_student);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        line_name = new QLineEdit(widget);
        line_name->setObjectName("line_name");
        line_name->setMaxLength(10);

        gridLayout->addWidget(line_name, 0, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        line_num = new QLineEdit(widget);
        line_num->setObjectName("line_num");
        line_num->setMaxLength(20);

        gridLayout->addWidget(line_num, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(delete_student);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        btn_Confirm = new QPushButton(widget_2);
        btn_Confirm->setObjectName("btn_Confirm");
        btn_Confirm->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(btn_Confirm, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget_2);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 2, 0, 1, 1);


        retranslateUi(delete_student);

        QMetaObject::connectSlotsByName(delete_student);
    } // setupUi

    void retranslateUi(QDialog *delete_student)
    {
        delete_student->setWindowTitle(QCoreApplication::translate("delete_student", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("delete_student", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\255\246\347\224\237\347\232\204\345\247\223\345\220\215\345\222\214\347\274\226\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("delete_student", "\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("delete_student", "\345\247\223\345\220\215", nullptr));
        btn_Confirm->setText(QCoreApplication::translate("delete_student", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("delete_student", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_student: public Ui_delete_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_STUDENT_H
