#include "admin_window.h"
#include "ui_admin_window.h"
#include "add_student.h"
#include "delete_student.h"
#include "student.h"
#include <QMessageBox>
#include <QFile>
#include "student_interface.h"
#include "add_teacher.h"
#include "teacher_interface.h"
#include "teacher.h"
#include "grad_student.h"
#include <QButtonGroup>
#include "add_grad_student.h"
#include "delete_grad_student.h"
#include "delete_teacher.h"
#include "grad_student_interface.h"
#include "modify_grad_student.h"
#include "modify_student.h"
#include "modify_teacher.h"
admin_window::admin_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_window)
{
    ui->setupUi(this);
}

admin_window::~admin_window()
{
    delete ui;
}

void admin_window::on_btn_total_add_clicked()
{
    int select = choose();
    if(select == 0) {
        add_student aa;
        aa.exec();
    }
    else if(select == 1){
        add_grad_student aa;
        aa.exec();
    }
    else if(select == 2) {
        add_teacher aa;
        aa.exec();
    }
}


void admin_window::on_btn_total_delet_clicked()
{
    int select = choose();
    if(select == 0){
        delete_student aa;
        aa.exec();
    }
    else if(select == 1){
        delete_grad_student aa;
        aa.exec();
    }
    else if(select == 2){
        delete_teacher aa;
        aa.exec();
    }

}


void admin_window::on_pushButton_2_clicked()
{
    if(!Student::student_flag && !Teacher::teacher_flag && !grad_student::student_flag) exit(0);
    else {
        QMessageBox MBox;
        MBox.setText("你所修改的数据并未保存\n是否直接退出");
        QPushButton *agreeBut = MBox.addButton("是", QMessageBox::AcceptRole);
        QPushButton *cancelBut = MBox.addButton("否",QMessageBox::AcceptRole);
        MBox.exec();
        if (MBox.clickedButton() == (QAbstractButton*)agreeBut) {
            qDebug() << "用户点击了是按钮";
            Student::student_flag = false;
            Teacher::teacher_flag = false;
            grad_student::student_flag = false;
            exit(0);
        }
        else if(MBox.clickedButton() == (QAbstractButton*)cancelBut){
            qDebug() << "用户点击了否按钮";
        }

    }
}


void admin_window::on_btn_admin_Confirm_clicked()
{
    bool flag = true;;
    for(int select = 0; select < 3; ++ select){
        if(select == 0){
            // 保存学生信息;

            auto file = QCoreApplication::applicationDirPath();
            QFile f;
            file += "/student.txt";
            f.setFileName(file);
            if(!f.open(QIODevice::ReadWrite|QIODevice::Truncate)){ // 没有找到文件;
                qDebug() << "error" << '\n';
                flag = false;
                QMessageBox Fail(QMessageBox::Question, "","没有找到文件",QMessageBox::Ok);
                Fail.exec();
            }
            else{
                QTextStream out(&f);
                for(int i = 0; i < (int)Student::Student_vi.size(); ++ i){
                    Student it = Student::Student_vi[i];
                    out << it.get_student_name() << ' ' << it.get_student_age() << ' ' << it.get_student_sex() << ' ' << it.get_student_num() << ' ' << it.get_math() << ' ' << it.get_English() << ' ' << it.get_C() << ' ' << it.get_student_password() << '\n';
                }
                f.close();
                Student::student_flag = false;
            }

        }
        else if(select == 1){
            // 保存研究生信息;
            auto file = QCoreApplication::applicationDirPath();
            QFile f;
            file += "/grad_student.txt";
            f.setFileName(file);
            if(!f.open(QIODevice::ReadWrite|QIODevice::Truncate)){ // 没有找到文件;
                qDebug() << "error" << '\n';
                flag = false;
                QMessageBox Fail(QMessageBox::Question, "","没有找到文件",QMessageBox::Ok);
                Fail.exec();
            }
            else{
                QTextStream out(&f);
                for(int i = 0; i < (int)grad_student::Student_vi.size(); ++ i){
                    grad_student it = grad_student::Student_vi[i];
                    out << it.get_student_name() << ' ' << it.get_student_age() << ' ' << it.get_student_sex() << ' ' << it.get_student_num() << ' ' << it.get_math() << ' ' << it.get_English() << ' ' << it.get_C() << ' ';
                    out << it.teacher_name << ' ' << it.teacher_age << ' ' << it.teacher_sex << ' ' << it.teacher_num << ' ' << it.get_Research_Directions() << ' ';
                    out << it.get_teacher_password() << '\n';
                }
                f.close();
                grad_student::student_flag = false;
            }
        }
        else if(select == 2){
            // 保存教师信息;
            auto file = QCoreApplication::applicationDirPath();
            QFile f;
            file += "/teacher.txt";
            f.setFileName(file);
            if(!f.open(QIODevice::ReadWrite|QIODevice::Truncate)){ // 没有找到文件;
                qDebug() << "error" << '\n';
                flag = false;
                QMessageBox Fail(QMessageBox::Question, "","没有找到文件",QMessageBox::Ok);
                Fail.exec();
            }
            else{
                QTextStream out(&f);
                for(int i = 0; i < (int)Teacher::Teacher_vi.size(); ++ i){
                    Teacher it = Teacher::Teacher_vi[i];
                    out << it.get_teacher_name() << ' ' << it.get_teacher_age() << ' ' << it.get_teacher_sex() << ' ' << it.get_teacher_num() << ' ' << it.get_job_title()  << ' ' << it.get_department() << ' ' << it.get_teacher_password()<< '\n';
                }
                f.close();

                Teacher::teacher_flag = false;
            }
        }
    }
    if(flag){
        QMessageBox success_Save(QMessageBox::Question, "保存成功","保存成功",QMessageBox::Ok);
        success_Save.exec();
    }

}


void admin_window::on_btn_total_view_clicked()
{
    int select = choose();
    if(select == 0){
        student_interface a;
        a.exec();
    }
    else if(select == 1){
        grad_student_interface a;
        a.exec();
    }
    else if(select == 2){
        teacher_interface a;
        a.exec();
    }
}


void admin_window::on_btn_total_modify_clicked()
{
    int select = choose();
    if(select == 0){
        modify_student a;
        a.exec();
    }
    else if(select == 1){
        modify_grad_student a;
        a.exec();
    }
    else if(select == 2){
        modify_teacher a;
        a.exec();
    }
}

int admin_window::choose()
{
    // 添加选择登录按钮;
    QButtonGroup *Choose = new QButtonGroup;
    Choose -> addButton(ui -> rb_student, 0); // 本科生
    Choose -> addButton(ui -> rb_grad_student, 1); // 研究生
    Choose -> addButton(ui -> rb_teacher, 2); // 教师
    int select = Choose -> checkedId();
    if(select > 2 || select < 0){
        QMessageBox Fail(QMessageBox::Question, "","请选择人员类型",QMessageBox::Ok);
        Fail.exec();
        return -1;
    }
    return select;
}


void admin_window::on_btn_clear_clicked()
{
    QMessageBox MBox;
    //MBox.setWindowTitle("QMessageBox自定义对话框");
    MBox.setText("是否选择删除所有数据\n删除之后数据无法找回\n请谨慎使用");
    QPushButton *agreeBut = MBox.addButton("是", QMessageBox::AcceptRole);
    QPushButton *cancelBut = MBox.addButton("否",QMessageBox::AcceptRole);
    MBox.exec();
    if (MBox.clickedButton() == (QAbstractButton*)agreeBut) {
        //在 Qt Creator 的输出窗口中输出指定字符串
        // 清空学生类的静态变量
        Student::Student_cnt = 0;
        Student::student_flag = false;
        Student::Student_st = {};
        Student::Student_vi = {};
        Student::student_idx = -1;
        Student::math_ranks = {}, Student::English_ranks = {}, Student::C_ranks = {}, Student::score_rank = {};

        // 清空教师类的静态变量
        Teacher::Teacher_cnt = 0;
        Teacher::Teacher_st = {};
        Teacher::Teacher_vi = {};
        Teacher::teacher_flag = false;
        Teacher::teacher_idx = 0;

        // 清空研究生类的静态变量
        grad_student::Student_cnt = 0;
        grad_student::student_flag = false;
        grad_student::Student_st = {};
        grad_student::Student_vi = {};
        grad_student::student_idx = -1;
        grad_student::math_ranks = {}, grad_student::English_ranks = {}, grad_student::C_ranks = {}, grad_student::score_rank = {};

        // 清空存储在后端文档里面的数据;
        auto file_student = QCoreApplication::applicationDirPath() + "/student.txt";
        auto file_teacher = QCoreApplication::applicationDirPath() + "/teacher.txt";
        auto file_grad_student = QCoreApplication::applicationDirPath() + "/grad_student.txt";
        QFile file_1(file_student);
        file_1.open(QFile::WriteOnly|QFile::Truncate), file_1.close();
        QFile file_2(file_teacher);
        file_2.open(QFile::WriteOnly|QFile::Truncate), file_2.close();
        QFile file_3(file_grad_student);
        file_3.open(QFile::WriteOnly|QFile::Truncate), file_3.close();

        // 提示清空成功
        QMessageBox Fail(QMessageBox::Question, "","数据已全部清除",QMessageBox::Ok);
        Fail.exec();
    }
    else if(MBox.clickedButton() == (QAbstractButton*)cancelBut){

    }



}

