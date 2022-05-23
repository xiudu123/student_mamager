#include "modify_teacher.h"
#include "ui_modify_teacher.h"
#include "QMessageBox"
#include "teacher.h"
modify_teacher::modify_teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_teacher)
{
    ui->setupUi(this);
}

modify_teacher::~modify_teacher()
{
    delete ui;
}

void modify_teacher::on_btn_cancel_clicked()
{
    this -> hide();
}


void modify_teacher::on_btn_Comfire_clicked()
{
    QString name = ui -> line_name_2 -> text();
    QString num = ui -> line_num_2 -> text();
    if(name == "" || num == ""){
        QMessageBox Find_Fail(QMessageBox::Question,"查找失败","请输入必填信息",QMessageBox::Ok);
        Find_Fail.exec();
    }
    else{
        bool flag = false;
        int idx;
        for(int i = 0; i < (int)Teacher::Teacher_vi.size(); ++ i){
            auto it = Teacher::Teacher_vi[i];
            if(name == it.get_teacher_name() && num == it.get_teacher_num()){
                flag = true;
                idx = i;
                break;
            }
        }
        if(!flag){
            QMessageBox Find_Fail(QMessageBox::Question,"查找失败","查无此人",QMessageBox::Ok);
            Find_Fail.exec();
        }
        else{
            if(ui -> line_job -> text() != ""){
                Teacher::Teacher_vi[idx].modify_job(ui -> line_job -> text());
                flag = true;
            }
            if(ui -> line_department -> text() != ""){
                Teacher::Teacher_vi[idx].modify_department(ui -> line_department -> text());
                flag = true;
            }
            if(!flag){
                QMessageBox Modify_Fail(QMessageBox::Question,"修改失败","请输入信息",QMessageBox::Ok);
                Modify_Fail.exec();
            }
            else{
                QMessageBox Modify_Success(QMessageBox::Question,"修改成功","修改成功",QMessageBox::Ok);
                Teacher::teacher_flag = true;
                Modify_Success.exec();
                this -> hide();
            }
        }
    }
}

