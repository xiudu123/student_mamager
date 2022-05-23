#ifndef TEACHER_H
#define TEACHER_H

#include "base_information.h"
#include <QString>
#include <vector>
#include <map>

class Teacher:virtual public Base_Information
{
private:
    QString job_title/*职称*/, department/*部门*/;
    QString teacher_password;
public:
    // 静态变量;
    static int Teacher_cnt; // 统计教师个数;
     static std::map<QString, bool> Teacher_st; // 记录教师编号;
    static std::vector<Teacher> Teacher_vi; // 记录所有学生信息;
    static bool teacher_flag; // 标记教师信息是否被修改;
    static int teacher_idx; // 当前是哪位教师登录;
    Teacher();
    Teacher(QString name, int age, QString sex, QString num, QString job_title, QString department);
    void modify_teacher(QString name, int age, QString sex, QString num, QString job_title, QString department);

    // 获取教师各类信息;
    QString get_job_title();
    QString get_department();
    QString get_teacher_password();
    QString get_teacher_name();
    int get_teacher_age();
    QString get_teacher_sex();
    QString get_teacher_num();
    void modify_teacher_password(QString p);
    void modify_job(QString job);
    void modify_department(QString de);
};

#endif // TEACHER_H
