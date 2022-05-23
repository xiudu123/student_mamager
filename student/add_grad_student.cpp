#include "add_grad_student.h"
#include "ui_add_grad_student.h"
#include <QButtonGroup>
#include <QMessageBox>
#include <teacher.h>
#include <grad_student.h>
add_grad_student::add_grad_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_grad_student)
{
    ui->setupUi(this);
}

add_grad_student::~add_grad_student()
{
    delete ui;
}

void add_grad_student::on_btn_cancel_clicked()
{
    this -> hide();
}


void add_grad_student::on_btn_Confirm_clicked()
{
    // 研究生信息;
    QButtonGroup *sex_choose = new QButtonGroup;
    sex_choose-> addButton(ui -> rb_man, 0);
    sex_choose-> addButton(ui -> rb_woman, 1);
    QString name = ui -> line_name -> text();
    int age = ui -> sb_age -> text().toUInt();
    QString sex;
    if(sex_choose -> checkedId() == 0) sex = "男";
    else if(sex_choose -> checkedId() == 1) sex = "女";
    else sex = "未知";
    QString num = ui -> line_num -> text();
    int math = ui -> line_math -> text().toUInt();
    int English = ui -> line_English -> text().toUInt();
    int C = ui -> line_C -> text().toUInt();
    QString resreach = ui -> line_research_directions -> text();
    if(name == ""){
        QMessageBox Fail_Name(QMessageBox::Question, "添加失败","请输入学生姓名",QMessageBox::Ok);
        Fail_Name.exec();
    }
    else if(ui -> sb_age -> text() == ""){
        QMessageBox Fail_age(QMessageBox::Question, "添加失败","请输入学生年龄",QMessageBox::Ok);
        Fail_age.exec();
    }
    else if(sex == "未知"){
        QMessageBox Fail_sex(QMessageBox::Question, "添加失败","请选择学生性别",QMessageBox::Ok);
        Fail_sex.exec();
    }
    else if(ui -> line_num ->text() == ""){
        QMessageBox Fail_num(QMessageBox::Question, "添加失败","请输入学生编号",QMessageBox::Ok);
        Fail_num.exec();
    }
    else if(ui -> line_math -> text() == "" || ui -> line_English -> text() == "" || ui -> line_C -> text() == ""){
        QMessageBox Fail_grade(QMessageBox::Question, "添加失败","请输入学生成绩",QMessageBox::Ok);
        Fail_grade.exec();
    }
    else if(ui -> line_math -> text()[0] == '-' || ui -> line_English -> text()[0] == '-' || ui -> line_C -> text()[0] == '-'){
        QMessageBox Fail_grade(QMessageBox::Question, "添加失败","成绩不能为负",QMessageBox::Ok);
        Fail_grade.exec();
    }
    else if(math > 100 || English > 100 || C > 100){
        QMessageBox Fail_grade(QMessageBox::Question, "添加失败","成绩不能超过100分",QMessageBox::Ok);
        Fail_grade.exec();
    }
    else if(resreach == ""){
        QMessageBox Fail_resreach(QMessageBox::Question, "添加失败","请输入研究方向",QMessageBox::Ok);
        Fail_resreach.exec();
    }
    else if(grad_student::Student_st[num]){
        QMessageBox Fail_add(QMessageBox::Question, "添加失败","该编号已存在",QMessageBox::Ok);
        Fail_add.exec();
    }
    else{
        // 导师信息;
        QString teacher_name = ui -> line_name_teacher -> text();
        QString teacher_num = ui -> line_num_teacher -> text();
        Teacher tt;
        qDebug() << teacher_name << ' ' << teacher_num << '\n';
        bool flag = false; // 查看导师是否存在;
        for(int i = 0; i < (int)Teacher::Teacher_vi.size(); ++ i){
            auto it = Teacher::Teacher_vi[i];
            if(it.get_teacher_name() == teacher_name && it.get_teacher_num() == teacher_num){
                flag = true;
                tt = it;
                break;
            }
        }
        if(!flag){
            QMessageBox Fail_add(QMessageBox::Question, "添加失败","该导师不存在",QMessageBox::Ok);
            Fail_add.exec();
        }
        else{
            qDebug() << name << ' ' << age << ' ' << sex << ' ' << num << ' ' << math << ' ' << English << ' ' << C << '\n';
            grad_student a(name, age, sex, num, math, English, C, tt.get_teacher_name(), tt.get_teacher_age(), tt.get_teacher_sex(), tt.get_teacher_num(), tt.get_job_title(), tt.get_department(), resreach);
            grad_student::Student_vi.emplace_back(a);
            ++ grad_student::Student_cnt;
            grad_student::Student_st[num] = true;
            grad_student::student_flag = true;
            QMessageBox Success(QMessageBox::Question, "添加成功", "添加成功", QMessageBox::Ok);
            Success.exec();
            this -> hide();
        }
    }



}

