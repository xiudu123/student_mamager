#include "grad_student.h"

grad_student::grad_student()
{

}

grad_student::grad_student(QString student_name, int student_age, QString student_sex, QString student_num, int student_math, int student_English, int student_C, QString teacher_name, int teacher_age, QString teacher_sex, QString teacher_num, QString teacher_job_title, QString teacher_department, QString Research_Directions)
    :Student(student_name, student_age, student_sex, student_num, student_math, student_English, student_C), Teacher(teacher_name, teacher_age, teacher_sex, teacher_num, teacher_job_title, teacher_department)
{
    this -> name = student_name;
    this -> age = student_age;
    this -> sex = student_sex;
    this -> num = student_num;
    this -> teacher_name = teacher_name;
    this -> teacher_num = teacher_num;
    this -> Research_Directions = Research_Directions;
    this -> teacher_age = age;
    this -> teacher_sex = sex;
}

QString grad_student::get_Research_Directions()
{
    return this -> Research_Directions;
}


int grad_student::Student_cnt = 0;
bool grad_student::student_flag = false;
std::map<QString, bool> grad_student::Student_st = {};
std::vector<grad_student> grad_student::Student_vi = {};
int grad_student::student_idx = -1;
std::vector<int> grad_student::math_ranks = {}, grad_student::English_ranks = {}, grad_student::C_ranks = {}, grad_student::score_rank = {};
