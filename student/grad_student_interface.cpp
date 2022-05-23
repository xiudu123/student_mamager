#include "grad_student_interface.h"
#include "ui_grad_student_interface.h"
#include <QMessageBox>
#include "grad_student.h"
grad_student_interface::grad_student_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grad_student_interface)
{
    ui->setupUi(this);
}

grad_student_interface::~grad_student_interface()
{
    delete ui;
}

void grad_student_interface::on_pushButton_clicked()
{
    QString name = ui -> line_name ->text();
    QString num = ui -> line_num -> text();
    if(name == "") {
        QMessageBox Find_Fail(QMessageBox::Question,"查找失败","请输入名字",QMessageBox::Ok);
        Find_Fail.exec();
        return;
    }
    if(num == ""){
        QMessageBox Find_Fail(QMessageBox::Question,"查找失败","请输入编号",QMessageBox::Ok);
        Find_Fail.exec();
        return;
    }
    int flag = false; // 判断学生是否存在;
    grad_student::C_ranks.clear(), grad_student::math_ranks.clear(), grad_student::English_ranks.clear(), grad_student::score_rank.clear();
    int t = 0;
    for(int i = 0; i < (int)grad_student::Student_vi.size(); ++ i){
        auto it = grad_student::Student_vi[i];
        if(it.get_student_name() == name && it.get_student_num() == num) flag = true, t = i; // 找到了这个学生;
        qDebug() << it.get_student_name() << ' ' << it.get_student_name() << '\n';
        grad_student::C_ranks.emplace_back(it.get_C());
        grad_student::English_ranks.emplace_back(it.get_English());
        grad_student::math_ranks.emplace_back(it.get_math());
        grad_student::score_rank.emplace_back(it.get_score());
    }
    if(!flag){
        QMessageBox Find_Fail(QMessageBox::Question,"查找失败","查无此人",QMessageBox::Ok);
        Find_Fail.exec();
    }
    else{
        // 将学生信息显示在对话框中;
        auto it = grad_student::Student_vi[t];
        ui -> line_age -> setText(QString::number(it.get_student_age()));
        ui -> line_sex -> setText(it.get_student_sex());
        ui -> line_math_grade -> setText(QString::number(it.get_math()));
        ui -> line_C_grade -> setText(QString::number(it.get_C()));
        ui -> line_English_grade -> setText(QString::number(it.get_English()));
        ui -> line_grade -> setText(QString::number(it.get_score()));
        std::sort(grad_student::English_ranks.begin(), grad_student::English_ranks.end());
        std::sort(grad_student::math_ranks.begin(), grad_student::math_ranks.end());
        std::sort(grad_student::C_ranks.begin(), grad_student::C_ranks.end());
        int e_rank = std::lower_bound(grad_student::English_ranks.begin(), grad_student::English_ranks.end(), it.get_English()) - grad_student::English_ranks.begin() + 1;
        int m_rank = std::lower_bound(grad_student::math_ranks.begin(), grad_student::math_ranks.end(), it.get_math()) - grad_student::math_ranks.begin() + 1;
        int c_rank = std::lower_bound(grad_student::C_ranks.begin(), grad_student::C_ranks.end(), it.get_C()) - grad_student::C_ranks.begin() + 1;
        int sc_rank = std::lower_bound(grad_student::score_rank.begin(), grad_student::score_rank.end(), it.get_score()) - grad_student::score_rank.begin() + 1;
        ui -> line_math_rank -> setText(QString::number(m_rank));
        ui -> line_C_rank -> setText(QString::number(c_rank));
        ui -> line_English_rank -> setText(QString::number(e_rank));
        ui -> line_grade_rank -> setText(QString::number(sc_rank));


        int flag = false; // 判断教师是否存在;
        int t = 0;
        for(int i = 0; i < (int)Teacher::Teacher_vi.size(); ++ i){
            auto itt = Teacher::Teacher_vi[i];
            if(itt.get_teacher_name() == it.teacher_name && itt.get_teacher_num() == it.teacher_num) flag = true, t = i; // 找到了这个教师;
        }
        if(!flag){
            QMessageBox Find_Fail(QMessageBox::Question,"查找失败","该导师不存在",QMessageBox::Ok);
            Find_Fail.exec();
        }
        else{
            // 将教师信息显示在对话框中;
            auto it = Teacher::Teacher_vi[t];
            ui -> line_name_teacher -> setText(it.get_teacher_name());
            ui -> line_num_teacher -> setText(it.get_teacher_num());
            ui -> line_age_teacher -> setText(QString::number(it.get_teacher_age()));
            ui -> line_sex_teacher -> setText(it.get_teacher_sex());
            ui -> line_job_teacher -> setText(it.get_job_title());
            ui -> line_department_teacher -> setText(it.get_department());
        }
    }
}


void grad_student_interface::on_btn_eixt_clicked()
{
    this -> hide();
}

