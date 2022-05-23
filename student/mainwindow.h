#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void recover_informatin();
private slots:
    void on_Login_Cancel_clicked();

    void on_Login_Succee_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
