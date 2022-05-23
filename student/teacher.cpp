#include "teacher.h"
#include <unordered_map>
#include <QString>
#include <vector>
Teacher::Teacher()
{
    num = "-1";
    teacher_password = "123456";
}

Teacher::Teacher(QString name, int age, QString sex, QString num, QString job_title, QString department)
{
    this -> num = num;
    this -> age = age;
    this -> sex = sex;
    this -> name = name;
    this -> job_title = job_title, this -> department = department;
    teacher_password = "123456";
}

void Teacher::modify_teacher(QString name, int age, QString sex, QString num, QString job_title, QString department)
{
    this -> name = name, this -> age = age, this -> sex = sex, this -> num = num, this -> job_title = job_title, this -> department = department;
}

QString Teacher::get_job_title()
{
    return job_title;
}

QString Teacher::get_department()
{
    return department;
}

QString Teacher::get_teacher_password()
{
    return teacher_password;
}

void Teacher::modify_teacher_password(QString p)
{
    this -> teacher_password = p;
}

void Teacher::modify_job(QString job)
{
    this -> job_title = job;
}

void Teacher::modify_department(QString de)
{
    this -> department = de;
}


QString Teacher::get_teacher_name()
{
    return name;
}

int Teacher::get_teacher_age()
{
    return age;
}

QString Teacher::get_teacher_sex()
{
    return sex;
}

QString Teacher::get_teacher_num()
{
    return num;
}

int Teacher::Teacher_cnt = 0; // 统计教师个数;
std::map<QString, bool> Teacher::Teacher_st = {}; // 记录教师编号;
std::vector<Teacher> Teacher::Teacher_vi = {}; // 记录所有学生信息;
bool Teacher::teacher_flag = false; // 标记教师信息是否被修改;
int Teacher::teacher_idx = 0; // 当前是哪位教师登录;
