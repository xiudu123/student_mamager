#ifndef TEACHER_INTERFACE_H
#define TEACHER_INTERFACE_H

#include <QDialog>

namespace Ui {
class teacher_interface;
}

class teacher_interface : public QDialog
{
    Q_OBJECT

public:
    explicit teacher_interface(QWidget *parent = nullptr);
    ~teacher_interface();

private slots:
    void on_btn_cancel_clicked();

    void on_ctn_Confirm_clicked();

private:
    Ui::teacher_interface *ui;
};

#endif // TEACHER_INTERFACE_H
