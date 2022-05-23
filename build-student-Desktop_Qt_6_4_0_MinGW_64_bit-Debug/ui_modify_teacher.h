/********************************************************************************
** Form generated from reading UI file 'modify_teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_TEACHER_H
#define UI_MODIFY_TEACHER_H

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

class Ui_modify_teacher
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *line_name_2;
    QLineEdit *line_num_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QLineEdit *line_department;
    QLabel *label_16;
    QLineEdit *line_job;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QPushButton *btn_Comfire;
    QPushButton *btn_cancel;

    void setupUi(QDialog *modify_teacher)
    {
        if (modify_teacher->objectName().isEmpty())
            modify_teacher->setObjectName("modify_teacher");
        modify_teacher->resize(496, 411);
        gridLayout_4 = new QGridLayout(modify_teacher);
        gridLayout_4->setObjectName("gridLayout_4");
        widget = new QWidget(modify_teacher);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        line_name_2 = new QLineEdit(widget);
        line_name_2->setObjectName("line_name_2");
        line_name_2->setMaxLength(10);

        gridLayout->addWidget(line_name_2, 1, 1, 1, 1);

        line_num_2 = new QLineEdit(widget);
        line_num_2->setObjectName("line_num_2");
        line_num_2->setMaxLength(20);

        gridLayout->addWidget(line_num_2, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);

        widget_2 = new QWidget(modify_teacher);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_17 = new QLabel(widget_2);
        label_17->setObjectName("label_17");

        gridLayout_2->addWidget(label_17, 2, 0, 1, 1);

        line_department = new QLineEdit(widget_2);
        line_department->setObjectName("line_department");

        gridLayout_2->addWidget(line_department, 2, 1, 1, 1);

        label_16 = new QLabel(widget_2);
        label_16->setObjectName("label_16");

        gridLayout_2->addWidget(label_16, 1, 0, 1, 1);

        line_job = new QLineEdit(widget_2);
        line_job->setObjectName("line_job");

        gridLayout_2->addWidget(line_job, 1, 1, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        widget_3 = new QWidget(modify_teacher);
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


        gridLayout_4->addWidget(widget_3, 2, 0, 1, 3);


        retranslateUi(modify_teacher);

        QMetaObject::connectSlotsByName(modify_teacher);
    } // setupUi

    void retranslateUi(QDialog *modify_teacher)
    {
        modify_teacher->setWindowTitle(QCoreApplication::translate("modify_teacher", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("modify_teacher", "\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("modify_teacher", "\345\247\223\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("modify_teacher", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\346\225\231\345\270\210\347\232\204\345\247\223\345\220\215\345\222\214\347\274\226\345\217\267", nullptr));
        label_17->setText(QCoreApplication::translate("modify_teacher", "\351\203\250\351\227\250", nullptr));
        label_16->setText(QCoreApplication::translate("modify_teacher", "\350\201\214\347\247\260", nullptr));
        label_14->setText(QCoreApplication::translate("modify_teacher", "\350\257\267\350\276\223\345\205\245\350\246\201\344\277\256\346\224\271\347\232\204\344\277\241\346\201\257", nullptr));
        btn_Comfire->setText(QCoreApplication::translate("modify_teacher", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("modify_teacher", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modify_teacher: public Ui_modify_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_TEACHER_H
