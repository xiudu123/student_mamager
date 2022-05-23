#ifndef ADMIN_WINDOW_H
#define ADMIN_WINDOW_H

#include <QDialog>

namespace Ui {
class admin_window;
}

class admin_window : public QDialog
{
    Q_OBJECT

public:
    explicit admin_window(QWidget *parent = nullptr);
    ~admin_window();

private slots:
    void on_btn_total_add_clicked();

    void on_btn_total_delet_clicked();

    void on_pushButton_2_clicked();

    void on_btn_admin_Confirm_clicked();

    void on_btn_total_view_clicked();

    void on_btn_total_modify_clicked();
    int choose();
    void on_btn_clear_clicked();

private:
    Ui::admin_window *ui;
};

#endif // ADMIN_WINDOW_H
