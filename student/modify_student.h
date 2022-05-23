#ifndef MODIFY_STUDENT_H
#define MODIFY_STUDENT_H

#include <QDialog>

namespace Ui {
class modify_student;
}

class modify_student : public QDialog
{
    Q_OBJECT

public:
    explicit modify_student(QWidget *parent = nullptr);
    ~modify_student();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_Comfire_clicked();

private:
    Ui::modify_student *ui;
};

#endif // MODIFY_STUDENT_H
