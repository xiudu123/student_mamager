#include "teacher_interface.h"
#include "ui_teacher_interface.h"
#include <QMessageBox>
#include <algorithm>
#include "teacher.h"
teacher_interface::teacher_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teacher_interface)
{
    ui->setupUi(this);
}

teacher_interface::~teacher_interface()
{
    delete ui;
}

void teacher_interface::on_btn_cancel_clicked()
{
    this -> hide();
}


void teacher_interface::on_ctn_Confirm_clicked()
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


    int flag = false; // 判断教师是否存在;
    int t = 0;
    for(int i = 0; i < (int)Teacher::Teacher_vi.size(); ++ i){
        auto it = Teacher::Teacher_vi[i];
        if(it.get_teacher_name() == name && it.get_teacher_num() == num) flag = true, t = i; // 找到了这个教师;
        qDebug() << it.get_teacher_name() << ' ' << it.get_teacher_name() << '\n';

    }
    if(!flag){
        QMessageBox Find_Fail(QMessageBox::Question,"查找失败","查无此人",QMessageBox::Ok);
        Find_Fail.exec();
    }
    else{
        // 将教师信息显示在对话框中;
        auto it = Teacher::Teacher_vi[t];

        ui -> line_age -> setText(QString::number(it.get_teacher_age()));
        ui -> line_sex -> setText(it.get_teacher_sex());
        ui -> line_job -> setText(it.get_job_title());
        ui -> line_department -> setText(it.get_department());
    }
}

