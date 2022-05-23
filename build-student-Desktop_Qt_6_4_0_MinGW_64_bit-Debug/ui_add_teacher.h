/********************************************************************************
** Form generated from reading UI file 'add_teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TEACHER_H
#define UI_ADD_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_teacher
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QPushButton *btn_Confirm;
    QPushButton *btn_cancel;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *line_name;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *sb_age;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *rb_man;
    QRadioButton *rb_woman;
    QLineEdit *line_num;
    QLineEdit *line_job;
    QLabel *label_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QLineEdit *line_deprtment;

    void setupUi(QDialog *add_teacher)
    {
        if (add_teacher->objectName().isEmpty())
            add_teacher->setObjectName("add_teacher");
        add_teacher->resize(542, 450);
        add_teacher->setMinimumSize(QSize(500, 300));
        gridLayout_4 = new QGridLayout(add_teacher);
        gridLayout_4->setObjectName("gridLayout_4");
        frame = new QFrame(add_teacher);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName("gridLayout_3");
        btn_Confirm = new QPushButton(frame);
        btn_Confirm->setObjectName("btn_Confirm");
        btn_Confirm->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_Confirm, 0, 0, 1, 1);

        btn_cancel = new QPushButton(frame);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setMinimumSize(QSize(0, 50));

        gridLayout_3->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_4->addWidget(frame, 2, 0, 1, 1);

        label = new QLabel(add_teacher);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        widget_2 = new QWidget(add_teacher);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(50, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 4, 0, 1, 2);

        line_name = new QLineEdit(widget_2);
        line_name->setObjectName("line_name");
        line_name->setMaxLength(10);

        gridLayout_2->addWidget(line_name, 0, 2, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(50, 20));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 2);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(50, 20));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(50, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        sb_age = new QSpinBox(widget_2);
        sb_age->setObjectName("sb_age");

        gridLayout_2->addWidget(sb_age, 1, 2, 1, 1);

        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        rb_man = new QRadioButton(widget);
        rb_man->setObjectName("rb_man");

        gridLayout->addWidget(rb_man, 0, 0, 1, 1);

        rb_woman = new QRadioButton(widget);
        rb_woman->setObjectName("rb_woman");

        gridLayout->addWidget(rb_woman, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 2, 2, 1, 1);

        line_num = new QLineEdit(widget_2);
        line_num->setObjectName("line_num");
        line_num->setMaxLength(20);

        gridLayout_2->addWidget(line_num, 4, 2, 1, 1);

        line_job = new QLineEdit(widget_2);
        line_job->setObjectName("line_job");
        line_job->setMaxLength(10);

        gridLayout_2->addWidget(line_job, 5, 2, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(50, 20));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(50, 20));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 5, 5, 1, 1);

        line_deprtment = new QLineEdit(widget_2);
        line_deprtment->setObjectName("line_deprtment");
        line_deprtment->setMaxLength(10);

        gridLayout_2->addWidget(line_deprtment, 6, 2, 1, 1);


        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(add_teacher);

        QMetaObject::connectSlotsByName(add_teacher);
    } // setupUi

    void retranslateUi(QDialog *add_teacher)
    {
        add_teacher->setWindowTitle(QCoreApplication::translate("add_teacher", "Dialog", nullptr));
        btn_Confirm->setText(QCoreApplication::translate("add_teacher", "\347\241\256\350\256\244", nullptr));
        btn_cancel->setText(QCoreApplication::translate("add_teacher", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("add_teacher", "\350\257\267\350\276\223\345\205\245\346\267\273\345\212\240\350\200\201\345\270\210\347\232\204\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("add_teacher", "\347\274\226\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("add_teacher", "\350\201\214\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("add_teacher", "\345\271\264\351\276\204", nullptr));
        label_2->setText(QCoreApplication::translate("add_teacher", "\345\247\223\345\220\215", nullptr));
        rb_man->setText(QCoreApplication::translate("add_teacher", "\347\224\267", nullptr));
        rb_woman->setText(QCoreApplication::translate("add_teacher", "\345\245\263", nullptr));
        label_5->setText(QCoreApplication::translate("add_teacher", "\346\200\247\345\210\253", nullptr));
        label_7->setText(QCoreApplication::translate("add_teacher", "\351\203\250\351\227\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_teacher: public Ui_add_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TEACHER_H
