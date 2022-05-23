#ifndef MODIFY_TEACHER_H
#define MODIFY_TEACHER_H

#include <QDialog>

namespace Ui {
class modify_teacher;
}

class modify_teacher : public QDialog
{
    Q_OBJECT

public:
    explicit modify_teacher(QWidget *parent = nullptr);
    ~modify_teacher();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_Comfire_clicked();

private:
    Ui::modify_teacher *ui;
};

#endif // MODIFY_TEACHER_H
