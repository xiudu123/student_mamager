/********************************************************************************
** Form generated from reading UI file 'delete_teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_TEACHER_H
#define UI_DELETE_TEACHER_H

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

class Ui_delete_teacher
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *line_name;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *line_num;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btn_Confirm;
    QPushButton *btn_cancel;

    void setupUi(QDialog *delete_teacher)
    {
        if (delete_teacher->objectName().isEmpty())
            delete_teacher->setObjectName("delete_teacher");
        delete_teacher->resize(400, 240);
        gridLayout_3 = new QGridLayout(delete_teacher);
        gridLayout_3->setObjectName("gridLayout_3");
        widget = new QWidget(delete_teacher);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        line_name = new QLineEdit(widget);
        line_name->setObjectName("line_name");
        line_name->setMaxLength(10);

        gridLayout->addWidget(line_name, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        line_num = new QLineEdit(widget);
        line_num->setObjectName("line_num");
        line_num->setMaxLength(20);

        gridLayout->addWidget(line_num, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 1, 1, 1, 1);

        label = new QLabel(delete_teacher);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        widget_2 = new QWidget(delete_teacher);
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


        gridLayout_3->addWidget(widget_2, 2, 1, 1, 1);


        retranslateUi(delete_teacher);

        QMetaObject::connectSlotsByName(delete_teacher);
    } // setupUi

    void retranslateUi(QDialog *delete_teacher)
    {
        delete_teacher->setWindowTitle(QCoreApplication::translate("delete_teacher", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("delete_teacher", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("delete_teacher", "\347\274\226\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("delete_teacher", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\350\200\201\345\270\210\347\232\204\345\247\223\345\220\215\345\222\214\347\274\226\345\217\267", nullptr));
        btn_Confirm->setText(QCoreApplication::translate("delete_teacher", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("delete_teacher", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_teacher: public Ui_delete_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_TEACHER_H
