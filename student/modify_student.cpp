#include "modify_student.h"
#include "ui_modify_student.h"
#include "student.h"
#include <QMessageBox>
modify_student::modify_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modify_student)
{
    ui->setupUi(this);
}

modify_student::~modify_student()
{
    delete ui;
}

void modify_student::on_btn_cancel_clicked()
{
    this -> hide();
}


void modify_student::on_btn_Comfire_clicked()
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
        for(int i = 0; i < (int)Student::Student_vi.size(); ++ i){
            auto it = Student::Student_vi[i];
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
                for(int i = 0; i < (int)Student::math_ranks.size(); ++ i){
                    if(Student::math_ranks[i] == Student::Student_vi[idx].get_math()){
                        Student::math_ranks.erase(Student::math_ranks.begin() + i);
                        Student::math_ranks.emplace_back(ui -> line_math -> text().toUInt());
                    }
                }
                Student::Student_vi[idx].modify_math(ui -> line_math -> text().toUInt());
                flag = true;
            }
            if(ui -> line_English -> text() != ""){
                for(int i = 0; i < (int)Student::English_ranks.size(); ++ i){
                    if(Student::English_ranks[i] == Student::Student_vi[idx].get_English()){
                        Student::English_ranks.erase(Student::English_ranks.begin() + i);
                        Student::English_ranks.emplace_back(ui -> line_English -> text().toUInt());
                    }
                }
                Student::Student_vi[idx].modify_English(ui -> line_English -> text().toUInt());
                flag = true;
            }
            if(ui -> line_C -> text() != ""){
                for(int i = 0; i < (int)Student::C_ranks.size(); ++ i){
                    if(Student::C_ranks[i] == Student::Student_vi[idx].get_English()){
                        Student::C_ranks.erase(Student::C_ranks.begin() + i);
                        Student::C_ranks.emplace_back(ui -> line_C -> text().toUInt());
                    }
                }
                Student::Student_vi[idx].modify_C(ui -> line_C -> text().toUInt());
                flag = true;
            }
            if(!flag){
                QMessageBox Modify_Fail(QMessageBox::Question,"修改失败","请输入信息",QMessageBox::Ok);
                Modify_Fail.exec();
            }
            else{
                Student::Student_vi[idx].update_score();
                QMessageBox Modify_Success(QMessageBox::Question,"修改成功","修改成功",QMessageBox::Ok);
                Student::student_flag = true;
                Modify_Success.exec();
                this -> hide();
            }
        }
    }

}

