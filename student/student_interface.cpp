#include "student_interface.h"
#include "ui_student_interface.h"
#include "student.h"
#include <QMessageBox>
#include <algorithm>
student_interface::student_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_interface)
{
    ui->setupUi(this);
}

student_interface::~student_interface()
{
    delete ui;
}

void student_interface::on_pushButton_clicked()
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
    Student::C_ranks.clear(), Student::math_ranks.clear(), Student::English_ranks.clear(), Student::score_rank.clear();
    int t = 0;
    for(int i = 0; i < (int)Student::Student_vi.size(); ++ i){
        auto it = Student::Student_vi[i];
        if(it.get_student_name() == name && it.get_student_num() == num) flag = true, t = i; // 找到了这个学生;
        qDebug() << it.get_student_name() << ' ' << it.get_student_name() << '\n';
        Student::C_ranks.emplace_back(it.get_C());
        Student::English_ranks.emplace_back(it.get_English());
        Student::math_ranks.emplace_back(it.get_math());
        Student::score_rank.emplace_back(it.get_score());
    }
    if(!flag){
        QMessageBox Find_Fail(QMessageBox::Question,"查找失败","查无此人",QMessageBox::Ok);
        Find_Fail.exec();
    }
    else{
        // 将学生信息显示在对话框中;
        auto it = Student::Student_vi[t];
        ui -> line_age -> setText(QString::number(it.get_student_age()));
        ui -> line_sex -> setText(it.get_student_sex());
        ui -> line_math_grade -> setText(QString::number(it.get_math()));
        ui -> line_C_grade -> setText(QString::number(it.get_C()));
        ui -> line_English_grade -> setText(QString::number(it.get_English()));
        ui -> line_grade -> setText(QString::number(it.get_score()));
        std::sort(Student::English_ranks.begin(), Student::English_ranks.end(), std::greater<int>());
        std::sort(Student::math_ranks.begin(), Student::math_ranks.end(), std::greater<int>());
        std::sort(Student::C_ranks.begin(), Student::C_ranks.end(), std::greater<int>());
        std::sort(Student::score_rank.begin(), Student::score_rank.end(), std::greater<int>());
        int e_rank = std::lower_bound(Student::English_ranks.begin(), Student::English_ranks.end(), it.get_English(), std::greater<int>()) - Student::English_ranks.begin() + 1;
        int m_rank = std::lower_bound(Student::math_ranks.begin(), Student::math_ranks.end(), it.get_math(), std::greater<int>()) - Student::math_ranks.begin() + 1;
        int c_rank = std::lower_bound(Student::C_ranks.begin(), Student::C_ranks.end(), it.get_C(), std::greater<int>()) - Student::C_ranks.begin() + 1;
        int sc_rank = std::lower_bound(Student::score_rank.begin(), Student::score_rank.end(), it.get_score(), std::greater<int>()) - Student::score_rank.begin() + 1;
        ui -> line_math_rank -> setText(QString::number(m_rank));
        ui -> line_C_rank -> setText(QString::number(c_rank));
        ui -> line_English_rank -> setText(QString::number(e_rank));
        ui -> line_grade_rank -> setText(QString::number(sc_rank));
    }
}


void student_interface::on_btn_eixt_clicked()
{
    this -> hide();
}

