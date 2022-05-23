#ifndef ADD_GRAD_STUDENT_H
#define ADD_GRAD_STUDENT_H

#include <QDialog>

namespace Ui {
class add_grad_student;
}

class add_grad_student : public QDialog
{
    Q_OBJECT

public:
    explicit add_grad_student(QWidget *parent = nullptr);
    ~add_grad_student();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_Confirm_clicked();

private:
    Ui::add_grad_student *ui;
};

#endif // ADD_GRAD_STUDENT_H
