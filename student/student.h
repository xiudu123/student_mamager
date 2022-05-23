#ifndef STUDENT_H
#define STUDENT_H
#include "base_information.h"
#include <map>
#include <vector>
#include <QString>
#include <QDebug>
class Student:virtual public Base_Information
{
protected:
    int math, English, C; // 学生成绩;
    int score;
protected:
    QString  Student_password; // 学生登录密码;
public:
    // 静态变量;
    static int Student_cnt; // 统计学生个数;
    static std::map<QString, bool> Student_st; // 记录学生编号;
    static std::vector<Student> Student_vi; // 记录所有学生信息;
    static std::vector<int> math_ranks, English_ranks, C_ranks, score_rank; // 用来记录每科成绩以及总成绩的排名;
    static bool student_flag; // 标记学生信息是否被修改;
    static int student_idx; // 当前是哪位学生登录;
    // 构造函数;
    Student();
    Student(QString name, int age, QString sex, QString num, int math, int English, int C);
    // 修改学生信息;
    void modify_student(QString name, int age, QString sex, QString num, int math, int English, int C);

    // 获取学生总成绩;
    int get_score();

    // 修改学生密码;
    void modify_student_password(QString p);

    // 获取学生各类信息;
    int get_math();
    int get_English();
    int get_C();
    QString get_student_name();
    int get_student_age();
    QString get_student_sex();
    QString get_student_num();
    QString get_student_password();

    // 修改学生各类信息;
    void modify_math(int math);
    void modify_English(int English);
    void modify_C(int C);
    void update_score();
    ~Student();
};

#endif // STUDENT_H
