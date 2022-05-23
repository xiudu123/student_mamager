#include "add_student.h"
#include "ui_add_student.h"
#include <QIntValidator>
#include <QButtonGroup>
#include <QMessageBox>
#include <QFile>
#include "student.h"
add_student::add_student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_student)
{
    ui->setupUi(this);
}


add_student::~add_student()
{
    delete ui;
}


void add_student::on_btn_cancel_clicked()
{
    this -> hide();
}


void add_student::on_btn_Confirm_clicked()
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
    int math = ui -> line_math -> text().toUInt();
    int English = ui -> line_English -> text().toUInt();
    int C = ui -> line_C -> text().toUInt();
    qDebug() << name << ' ' << age << ' ' << sex << ' ' << num << ' ' << math << ' ' << English << ' ' << C << '\n';
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
    else if(ui -> line_math -> text() == "" || ui -> line_English -> text() == "" || ui -> line_C -> text() == ""){
        QMessageBox Fail_grade(QMessageBox::Question, "添加失败","请输入成绩",QMessageBox::Ok);
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
    else{
        this -> hide();
//        auto file = QCoreApplication::applicationDirPath();
//        QFile f;
//        file += "/student.txt";
//        f.setFileName(file);
//        if(!f.open(QIODevice::ReadWrite | QIODevice::Append)){ // 没有找到文件;
//            qDebug() << "error" << '\n';
//            QMessageBox Fail(QMessageBox::Question, "","没有找到文件",QMessageBox::Ok);
//            Fail.exec();
//        }
//        else{
//            QTextStream out(&f);
//            out << name << ' ' << num << ' ' << age << ' ' << sex  << ' ' << math << ' ' << English << ' ' << C << '\n';
//            f.close();
//        }


        if(!Student::Student_st[num]){
            Student s1(name, age, sex, num, math, English, C);
            Student::Student_vi.emplace_back(s1);

            ++ Student::Student_cnt;
            Student::Student_st[num] = true;
            Student::student_flag = true;
            QMessageBox Success(QMessageBox::Question, "添加成功", "添加成功", QMessageBox::Ok);
            Success.exec();
        }
        else{
            QMessageBox Fail_add(QMessageBox::Question, "添加失败","该编号已存在",QMessageBox::Ok);
            Fail_add.exec();
        }

    }

}

