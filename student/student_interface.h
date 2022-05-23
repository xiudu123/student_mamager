#ifndef STUDENT_INTERFACE_H
#define STUDENT_INTERFACE_H

#include <QDialog>

namespace Ui {
class student_interface;
}

class student_interface : public QDialog
{
    Q_OBJECT

public:
    explicit student_interface(QWidget *parent = nullptr);
    ~student_interface();

private slots:
    void on_pushButton_clicked();

    void on_btn_eixt_clicked();

private:
    Ui::student_interface *ui;
};

#endif // STUDENT_INTERFACE_H
