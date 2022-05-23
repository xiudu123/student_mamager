#ifndef MODIFY_GRAD_STUDENT_H
#define MODIFY_GRAD_STUDENT_H

#include <QDialog>

namespace Ui {
class modify_grad_student;
}

class modify_grad_student : public QDialog
{
    Q_OBJECT

public:
    explicit modify_grad_student(QWidget *parent = nullptr);
    ~modify_grad_student();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_Comfire_clicked();

private:
    Ui::modify_grad_student *ui;
};

#endif // MODIFY_GRAD_STUDENT_H
