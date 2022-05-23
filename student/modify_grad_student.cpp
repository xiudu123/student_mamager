#include "modify_grad_student.h"
#include "ui_modify_grad_student.h"
#include <QMessageBox>
#include <grad_student.h>
#include <teacher.h>
modify_grad_student::modify_grad_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_grad_student)
{
    ui->setupUi(this);
}

modify_grad_student::~modify_grad_student()
{
    delete ui;
}

void modify_grad_student::on_btn_cancel_clicked()
{
    this -> hide();
}


void modify_grad_student::on_btn_Comfire_clicked()
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
        for(int i = 0; i < (int)grad_student::Student_vi.size(); ++ i){
            auto it = grad_student::Student_vi[i];
            if(name == it.get_student_name() && num == it.get_student_num()){
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
            bool flag = false;

            if(ui -> line_math -> text() != ""){
                for(int i = 0; i < (int)grad_student::math_ranks.size(); ++ i){
                    if(grad_student::math_ranks[i] == grad_student::Student_vi[idx].get_math()){
                        grad_student::math_ranks.erase(grad_student::math_ranks.begin() + i);
                        grad_student::math_ranks.emplace_back(ui -> line_math -> text().toUInt());
                    }
                }

                grad_student::Student_vi[idx].modify_math(ui -> line_math -> text().toUInt());
                flag = true;
            }
            if(ui -> line_English -> text() != ""){
                for(int i = 0; i < (int)grad_student::English_ranks.size(); ++ i){
                    if(grad_student::English_ranks[i] == grad_student::Student_vi[idx].get_English()){
                        grad_student::English_ranks.erase(grad_student::English_ranks.begin() + i);
                        grad_student::English_ranks.emplace_back(ui -> line_English -> text().toUInt());
                    }
                }
                grad_student::Student_vi[idx].modify_English(ui -> line_English -> text().toUInt());
                flag = true;
            }
            if(ui -> line_C -> text() != ""){
                for(int i = 0; i < (int)grad_student::C_ranks.size(); ++ i){
                    if(grad_student::C_ranks[i] == grad_student::Student_vi[idx].get_English()){
                        grad_student::C_ranks.erase(grad_student::C_ranks.begin() + i);
                        grad_student::C_ranks.emplace_back(ui -> line_C -> text().toUInt());
                    }
                }
                grad_student::Student_vi[idx].modify_C(ui -> line_C -> text().toUInt());
                flag = true;
            }
            if(flag) grad_student::Student_vi[idx].update_score();
            QString name_teacher = ui -> line_name_techer -> text();
            QString num_teacher = ui -> line_num_teacher -> text();
            if(name_teacher != "" && num_teacher != ""){
                bool fflag = false;
                for(int i = 0; i < (int)Teacher::Teacher_vi.size(); ++ i){
                    if(name_teacher == Teacher::Teacher_vi[i].get_teacher_name() && num_teacher == Teacher::Teacher_vi[i].get_teacher_num()){
                        auto itt = Teacher::Teacher_vi[i];
                        grad_student::Student_vi[idx].teacher_name = itt.get_teacher_name(), grad_student::Student_vi[idx].teacher_age = itt.get_teacher_age(), grad_student::Student_vi[idx].teacher_num = itt.get_teacher_num(), grad_student::Student_vi[idx].teacher_sex = itt.get_teacher_sex();
                        grad_student::Student_vi[idx].modify_job(itt.get_job_title()), grad_student::Student_vi[idx].modify_department(itt.get_department());
                        fflag = true;

                    }
                }
                if(!fflag){
                    QMessageBox Find_Fail(QMessageBox::Question,"查找失败","查无导师",QMessageBox::Ok);
                    Find_Fail.exec();
                }
                else flag = true;
            }
            if(!flag){
                QMessageBox Modify_Fail(QMessageBox::Question,"修改失败","请输入信息",QMessageBox::Ok);
                Modify_Fail.exec();
            }else{
                QMessageBox Modify_Success(QMessageBox::Question,"修改成功","修改成功",QMessageBox::Ok);
                grad_student::student_flag = true;
                Modify_Success.exec();
                this -> hide();
            }
        }

    }
}

