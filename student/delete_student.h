#ifndef DELETE_STUDENT_H
#define DELETE_STUDENT_H

#include <QDialog>

namespace Ui {
class delete_student;
}

class delete_student : public QDialog
{
    Q_OBJECT

public:
    explicit delete_student(QWidget *parent = nullptr);
    ~delete_student();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_Confirm_clicked();

private:
    Ui::delete_student *ui;
};

#endif // DELETE_STUDENT_H
