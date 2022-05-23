#include "delete_grad_student.h"
#include "ui_delete_grad_student.h"
#include <QFile>
#include "grad_student.h"
#include <QMessageBox>
delete_grad_student::delete_grad_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_grad_student)
{
    ui->setupUi(this);
}

delete_grad_student::~delete_grad_student()
{
    delete ui;
}

void delete_grad_student::on_btn_cancel_clicked()
{
    this -> hide();
}


void delete_grad_student::on_btn_Confirm_clicked()
{
    QString name = ui -> line_name -> text();
    QString num = ui -> line_num -> text();
    bool flag = false;
    for(int i = 0; i < (int)grad_student::Student_vi.size(); ++ i){
        auto it = grad_student::Student_vi[i];
        if(it.get_student_name() == name && it.get_student_num() == num){
            grad_student::Student_vi.erase(grad_student::Student_vi.begin() + i);
            grad_student::Student_st.erase(num);
            -- grad_student::Student_cnt;
            flag = true;
            break;
        }
    }
    if(flag) {
        grad_student::student_flag = true;
        QMessageBox Delete_Success(QMessageBox::Question, "","删除成功",QMessageBox::Ok);
        Delete_Success.exec();
        this -> hide();
    }
    else{
        QMessageBox Find_Fail(QMessageBox::Question, "","查无此人",QMessageBox::Ok);
        Find_Fail.exec();
    }
}

