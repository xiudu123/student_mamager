#include "delete_teacher.h"
#include "ui_delete_teacher.h"
#include "teacher.h"
#include "QMessageBox"
delete_teacher::delete_teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_teacher)
{
    ui->setupUi(this);
}

delete_teacher::~delete_teacher()
{
    delete ui;
}

void delete_teacher::on_btn_cancel_clicked()
{
    this -> hide();
}


void delete_teacher::on_btn_Confirm_clicked()
{
    QString name = ui -> line_name -> text();
    QString num = ui -> line_num -> text();
    bool flag = false;
    for(int i = 0; i < (int)Teacher::Teacher_vi.size(); ++ i){
        auto it = Teacher::Teacher_vi[i];
        if(it.get_teacher_name() == name && it.get_teacher_num() == num){
            Teacher::Teacher_vi.erase(Teacher::Teacher_vi.begin() + i);
            Teacher::Teacher_st.erase(num);
            -- Teacher::Teacher_cnt;
            flag = true;
            break;
        }
    }
    if(flag) {
        Teacher::teacher_flag = true;
        QMessageBox Delete_Success(QMessageBox::Question, "","删除成功",QMessageBox::Ok);
        Delete_Success.exec();
        this -> hide();
    }
    else{
        QMessageBox Find_Fail(QMessageBox::Question, "","查无此人",QMessageBox::Ok);
        Find_Fail.exec();
    }
}

