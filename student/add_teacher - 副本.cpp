#include "add_teacher.h"
#include "ui_add_teacher.h"
#include <QButtonGroup>
#include <QMessageBox>
#include "teacher.h"
add_teacher::add_teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_teacher)
{
    ui->setupUi(this);
}

add_teacher::~add_teacher()
{
    delete ui;
}

void add_teacher::on_btn_cancel_clicked()
{
    this -> hide();
}


void add_teacher::on_btn_Confirm_clicked()
{
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
    QString job_title = ui -> line_job -> text();
    QString department = ui -> line_deprtment -> text();
    if(name == ""){
        QMessageBox Fail_Name(QMessageBox::Question, "添加失败","请输入姓名",QMessageBox::Ok);
        Fail_Name.exec();
    }
    else if(ui -> sb_age -> text() == ""){
        QMessageBox Fail_age(QMessageBox::Question, "添加失败","请输入年龄",QMessageBox::Ok);
        Fail_age.exec();
    }
    else if(sex == "未知"){
        QMessageBox Fail_sex(QMessageBox::Question, "添加失败","请选择性别",QMessageBox::Ok);
        Fail_sex.exec();
    }
    else if(ui -> line_num ->text() == ""){
        QMessageBox Fail_num(QMessageBox::Question, "添加失败","请输入编号",QMessageBox::Ok);
        Fail_num.exec();
    }
    else if(ui -> line_job -> text() == ""){
        QMessageBox Fail_job(QMessageBox::Question, "添加失败","请输入职称",QMessageBox::Ok);
        Fail_job.exec();
    }
    else if(ui -> line_deprtment -> text() == ""){
        QMessageBox Fail_de(QMessageBox::Question, "添加失败","请输入部门",QMessageBox::Ok);
        Fail_de.exec();
    }
    else{
        this -> hide();
        if(!Teacher::Teacher_st[num]){
            Teacher t1(name, age, sex, num, job_title, department);
            Teacher::Teacher_vi.emplace_back(t1);

            ++ Teacher::Teacher_cnt;
            Teacher::Teacher_st[num] = true;
            Teacher::teacher_flag = true;
            QMessageBox Success(QMessageBox::Question, "添加成功", "添加成功", QMessageBox::Ok);
            Success.exec();
        }
        else{
            QMessageBox Fail_add(QMessageBox::Question, "添加失败","该编号已存在",QMessageBox::Ok);
            Fail_add.exec();
        }
    }
}

