#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QButtonGroup>
#include <fstream>
#include <iostream>
#include <cstring>
#include <QFile>
#include <sstream>
#include "admin_window.h"
#include "student_interface.h"
#include "teacher_interface.h"
#include "teacher.h"
#include "grad_student.h"
#include "student.h"
#include "grad_student_interface.h"
#include "teacher_interface.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::recover_informatin()
{
    QFile f;
    std::string str1;
    std::string name, num, sex, password_;
    int age;
    int math, English, C; // 学生信息;
    std::string job, department;


    // 恢复本科生信息;
    auto file = QCoreApplication::applicationDirPath() + "/student.txt";
    qDebug() << file << '\n';
    f.setFileName(file);

    if(!f.open(QIODevice::ReadOnly | QIODevice::Text)){ // 没有找到学生文件;
        qDebug() << "error" << '\n';
    }
    else{
        while(!f.atEnd()) {
            QByteArray line = f.readLine();
            QString str(line);
            str1 = str.toStdString();
            std::stringstream ss(str1);
            ss >> name >> age >> sex >> num >> math >> English >> C >> password_;
            Student a(QString::fromStdString(name), age, QString::fromStdString(sex), QString::fromStdString(num), math, English, C);
            a.modify_student_password(QString::fromStdString(password_));
            Student::Student_vi.emplace_back(a);
        }
        f.close();
    }

    // 恢复教师信息;
    file = QCoreApplication::applicationDirPath() + "/teacher.txt";
    qDebug() << file << '\n';
    f.setFileName(file);

    if(!f.open(QIODevice::ReadOnly | QIODevice::Text)){ // 没有找到文件;
        qDebug() << "error" << '\n';
    }
    else{
        while(!f.atEnd()) {
            QByteArray line = f.readLine();
            QString str(line);
            str1 = str.toStdString();
            std::stringstream ss(str1);
            ss >> name >> age >> sex >> num >> job >> department >> password_;
            qDebug() << QString::fromStdString(name) << ' ' << age << ' ' << QString::fromStdString(sex) << ' ' << QString::fromStdString(num) << ' ' << QString::fromStdString(job) << ' ' << QString::fromStdString(department) << ' ' << QString::fromStdString(password_) << '\n';
            Teacher a(QString::fromStdString(name), age, QString::fromStdString(sex), QString::fromStdString(num), QString::fromStdString(job), QString::fromStdString(department));
            a.modify_teacher_password(QString::fromStdString(password_));
            Teacher::Teacher_vi.emplace_back(a);
        }

        f.close();
    }

    // 恢复研究生信息;
    file = QCoreApplication::applicationDirPath() + "/grad_student.txt";
    qDebug() << file << '\n';
    f.setFileName(file);

    if(!f.open(QIODevice::ReadOnly | QIODevice::Text)){ // 没有找到文件;
        qDebug() << "error" << '\n';
    }
    else{
        while(!f.atEnd()) {
            QByteArray line = f.readLine();
            QString str(line);
            str1 = str.toStdString();
            std::stringstream ss(str1);
            //ss >> name >> age >> sex >> num >> job >> department >> password_;
            std::string student_name, teacher_name, student_sex, teacher_sex, student_num, teacher_num;
            int student_age, teacher_age;
            int student_math, student_English, student_C;
            std::string teacher_job, teacher_department;
            std::string Research_Directions;
            ss >> student_name >> student_age >> student_sex >> student_num >> student_math >> student_English >> student_C;
            ss >> teacher_name >> teacher_age >> teacher_sex >> teacher_num;
            ss >> Research_Directions;
            ss >> password_;
            grad_student a(QString::fromStdString(student_name), student_age, QString::fromStdString(student_sex), QString::fromStdString(student_num), student_math, student_English, student_C,
                           QString::fromStdString(teacher_name), teacher_age, QString::fromStdString(teacher_sex), QString::fromStdString(teacher_num), QString::fromStdString(teacher_job), QString::fromStdString(teacher_department),
                           QString::fromStdString(Research_Directions));
            a.modify_student_password(QString::fromStdString(password_));
           // qDebug() << "研究生" << QString::fromStdString(student_name) << ' ' << QString::fromStdString(password_);
            //qDebug() << QString::fromStdString(str1) << '\n';
            grad_student::Student_vi.emplace_back(a);
        }

        f.close();
    }

}



void MainWindow::on_Login_Cancel_clicked()
{
    QMessageBox MBox;
    //MBox.setWindowTitle("QMessageBox自定义对话框");
    MBox.setText("是否确认退出");
    QPushButton *agreeBut = MBox.addButton("同意", QMessageBox::AcceptRole);
    QPushButton *cancelBut = MBox.addButton("取消",QMessageBox::AcceptRole);
    this -> hide();
    MBox.exec();
    if (MBox.clickedButton() == (QAbstractButton*)agreeBut) {
        //在 Qt Creator 的输出窗口中输出指定字符串
        qDebug() << "用户点击了同意按钮";
        exit(0);
    }
    else if(MBox.clickedButton() == (QAbstractButton*)cancelBut){
        qDebug() << "用户点击了取消按钮";
        this -> show();
    }
}


void MainWindow::on_Login_Succee_clicked()
{
    // 创建登录失败提示窗口;
    QMessageBox MyBox1(QMessageBox::Question,"Title","登录成功",QMessageBox::Yes|QMessageBox::No);
    QMessageBox Loin_Fail_Box(QMessageBox::Question,"登录失败","账户或密码错误",QMessageBox::Ok);
    QString account = ui -> Loin_account -> text();
    QString password = ui -> Loin_password -> text();
    // 添加选择登录按钮;
    QButtonGroup *login_choose = new QButtonGroup;
    login_choose -> addButton(ui -> login_student, 0); // 本科生登录
    login_choose -> addButton(ui -> login_grad_student, 1); // 研究生登录
    login_choose -> addButton(ui -> login_teacher, 2); // 教师登录
    login_choose -> addButton(ui -> login_admin, 3); // 管理员登录
    // 登录;
    int choose = login_choose -> checkedId();

    // 基本信息;
    bool flag = false;
    switch (choose) {
    case 0:
        recover_informatin();
        // 本科生登录;
        qDebug() << "本科生登录" << '\n';
        for(int i = 0; i < (int)Student::Student_vi.size(); ++ i){
            auto it = Student::Student_vi[i];
            if((account == it.get_student_name() || account == it.get_student_num()) && password == it.get_student_password()){
                Student::student_idx = i;
                flag = true;
                break;
            }
        }
        if(flag){ // 登录成功;
            this -> hide();
//                MyBox1.exec();
            student_interface a;
            a.exec();
        }
        else Loin_Fail_Box.exec(); // 登录失败;

        break;
    case 1:
        // 研究生登录;
        recover_informatin();
        qDebug() << "研究生登录" << '\n';

        for(int i = 0; i < (int)grad_student::Student_vi.size(); ++ i){
            auto it = grad_student::Student_vi[i];
            qDebug() << it.get_student_name() << ' ' << it.get_student_password() << '\n';
            if((account == it.get_student_name() || account == it.get_student_num()) && password == it.get_student_password()){

                grad_student::student_idx = i;
                flag = true;
                break;
            }
        }
        if(flag){ // 登录成功;
            this -> hide();
//            MyBox1.exec();
            grad_student_interface a;
            a.exec();
        }
        else Loin_Fail_Box.exec(); // 登录失败;
        break;
    case 2:
        // 教师登录;
        recover_informatin();
        qDebug() << "教师登录" << '\n';
        qDebug() << account << ' ' << password << '\n';
        for(int i = 0; i < (int)Teacher::Teacher_vi.size(); ++ i){
            auto it = Teacher::Teacher_vi[i];
            qDebug() << it.get_teacher_name() << ' ' << it.get_teacher_password() << '\n';
            if((account == it.get_teacher_name() || account == it.get_teacher_num()) && password == it.get_teacher_password()){
                Teacher::teacher_idx = i;
                flag = true;
                break;
            }
        }
        while(flag){ // 登录成功;
            this -> hide();
            QMessageBox MBox;
            MBox.setText("请问你要查看谁的信息");
            QPushButton *stBut = MBox.addButton("本科生", QMessageBox::AcceptRole);
            QPushButton *grBut = MBox.addButton("研究生",QMessageBox::AcceptRole);
            QPushButton *teaBut = MBox.addButton("教师",QMessageBox::AcceptRole);
            QPushButton *cancelBut = MBox.addButton("退出",QMessageBox::AcceptRole);
            MBox.exec();
            if (MBox.clickedButton() == (QAbstractButton*)stBut) {
                qDebug() << "本科生";
                student_interface a;
                a.exec();
            }
            else if(MBox.clickedButton() == (QAbstractButton*)grBut){
                qDebug() << "研究生";
                grad_student_interface a;
                a.exec();
            }
            else if(MBox.clickedButton() == (QAbstractButton*)teaBut){
                qDebug() << "教师";
                teacher_interface a;
                a.exec();
            }
            else if(MBox.clickedButton() == (QAbstractButton*)cancelBut){
                qDebug() << "退出";
                exit(0);
            }

        }
        if(!flag)Loin_Fail_Box.exec(); // 登录失败;

        break;
    case 3:
        // 管理员登录;
        recover_informatin();
        if(account == "锈渎" && password == "123456"){ // 登录成功;
            this -> hide();
            admin_window ad;
            ad.exec();
//            MyBox1.exec();
        }
        else{ // 登录失败;
            Loin_Fail_Box.exec();
        }
        break;
    default:
        QMessageBox Loin_Fail(QMessageBox::Question,"登录失败","请选择登录方式",QMessageBox::Ok);
        Loin_Fail.exec();
        break;
    }
}
