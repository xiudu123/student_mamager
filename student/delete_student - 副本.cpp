#include "delete_student.h"
#include "ui_delete_student.h"
#include <QFile>
#include "student.h"
#include <QMessageBox>
delete_student::delete_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_student)
{
    ui->setupUi(this);
}

delete_student::~delete_student()
{
    delete ui;
}

void delete_student::on_btn_cancel_clicked()
{
    this -> hide();
}


void delete_student::on_btn_Confirm_clicked()
{
    QString name = ui -> line_name -> text();
    QString num = ui -> line_num -> text();
    bool flag = false;
    for(int i = 0; i < (int)Student::Student_vi.size(); ++ i){
        auto it = Student::Student_vi[i];
        if(it.get_student_name() == name && it.get_student_num() == num){
            Student::Student_vi.erase(Student::Student_vi.begin() + i);
            Student::Student_st.erase(num);
            -- Student::Student_cnt;
            flag = true;
            break;
        }
    }
    if(flag) {
        Student::student_flag = true;
        QMessageBox Delete_Success(QMessageBox::Question, "","删除成功",QMessageBox::Ok);
        Delete_Success.exec();
        this -> hide();
    }
    else{
        QMessageBox Find_Fail(QMessageBox::Question, "","查无此人",QMessageBox::Ok);
        Find_Fail.exec();
    }
}

