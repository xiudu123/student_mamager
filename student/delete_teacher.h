#ifndef DELETE_TEACHER_H
#define DELETE_TEACHER_H

#include <QDialog>

namespace Ui {
class delete_teacher;
}

class delete_teacher : public QDialog
{
    Q_OBJECT

public:
    explicit delete_teacher(QWidget *parent = nullptr);
    ~delete_teacher();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_Confirm_clicked();

private:
    Ui::delete_teacher *ui;
};

#endif // DELETE_TEACHER_H
