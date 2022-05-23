#ifndef GRAD_STUDENT_INTERFACE_H
#define GRAD_STUDENT_INTERFACE_H

#include <QDialog>

namespace Ui {
class grad_student_interface;
}

class grad_student_interface : public QDialog
{
    Q_OBJECT

public:
    explicit grad_student_interface(QWidget *parent = nullptr);
    ~grad_student_interface();

private slots:
    void on_pushButton_clicked();

    void on_btn_eixt_clicked();

private:
    Ui::grad_student_interface *ui;
};

#endif // GRAD_STUDENT_INTERFACE_H
