#ifndef DELETE_GRAD_STUDENT_H
#define DELETE_GRAD_STUDENT_H

#include <QDialog>

namespace Ui {
class delete_grad_student;
}

class delete_grad_student : public QDialog
{
    Q_OBJECT

public:
    explicit delete_grad_student(QWidget *parent = nullptr);
    ~delete_grad_student();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_Confirm_clicked();

private:
    Ui::delete_grad_student *ui;
};

#endif // DELETE_GRAD_STUDENT_H
