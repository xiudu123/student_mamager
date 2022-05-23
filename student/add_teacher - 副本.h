#ifndef ADD_TEACHER_H
#define ADD_TEACHER_H

#include <QDialog>

namespace Ui {
class add_teacher;
}

class add_teacher : public QDialog
{
    Q_OBJECT

public:
    explicit add_teacher(QWidget *parent = nullptr);
    ~add_teacher();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_Confirm_clicked();

private:
    Ui::add_teacher *ui;
};

#endif // ADD_TEACHER_H
