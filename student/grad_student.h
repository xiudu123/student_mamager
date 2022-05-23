#ifndef GRAD_STUDENT_H
#define GRAD_STUDENT_H

#include "student.h"
#include "teacher.h"
#include "base_information.h"
class grad_student:public Student,public Teacher
{
private:
    QString Research_Directions;

public:
    grad_student();
    grad_student(QString student_name, int student_age, QString student_sex, QString student_num, int student_math, int student_English, int student_C, QString teacher_name, int teacher_age, QString teacher_sex, QString teacher_num, QString teacher_job_title, QString teacher_department, QString Research_Directions);
    static int Student_cnt; // 统计学生个数;
    static std::map<QString, bool> Student_st; // 记录学生编号;
    static std::vector<grad_student> Student_vi; // 记录所有学生信息;
    static std::vector<int> math_ranks, English_ranks, C_ranks, score_rank; // 用来记录每科成绩以及总成绩的排名;
    static bool student_flag; // 标记学生信息是否被修改;
    static int student_idx; // 当前是哪位学生登录;
    QString teacher_name, teacher_num, teacher_sex;
    int teacher_age;
    QString get_Research_Directions();
};

#endif // GRAD_STUDENT_H
