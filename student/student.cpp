#include "student.h"

Student::Student()
{
    Student_password = "123456";
}

Student::Student(QString name, int age, QString sex, QString num, int math, int English, int C):Base_Information(num, name, sex, age)
{
    this -> math = math, this -> English = English, this -> C = C;
    Student_password = "123456";
    score = math + English + C;
}


void Student::modify_student(QString name, int age, QString sex, QString num, int math, int English, int C)
{
    this -> name = name, this -> age = age; this -> sex = sex, this -> num = num, this -> math = math, this -> English = English, this -> C = C;
    score = math + English + C;
}

int Student::get_score()
{
    return math + English + C;
}

void Student::modify_student_password(QString p)
{
    this -> Student_password = p;
}


int Student::get_math()
{
    return math;
}

int Student::get_English()
{
    return English;
}

int Student::get_C()
{
    return C;
}

QString Student::get_student_password()
{
    return Student_password;
}

void Student::modify_math(int math)
{
    this -> math = math;
}

void Student::modify_English(int English)
{
    this -> English = English;
}

void Student::modify_C(int C)
{
    this -> C = C;
}

void Student::update_score()
{
    this -> score = this -> math + this -> C + this -> English;
}

QString Student::get_student_name()
{
    return name;
}

int Student::get_student_age()
{
    return age;
}

QString Student::get_student_sex()
{
    return sex;
}

QString Student::get_student_num()
{
    return num;
}

Student::~Student()
{

}

int Student::Student_cnt = 0;
bool Student::student_flag = false;
std::map<QString, bool> Student::Student_st = {};
std::vector<Student> Student::Student_vi = {};
int Student::student_idx = -1;
std::vector<int> Student::math_ranks = {}, Student::English_ranks = {}, Student::C_ranks = {}, Student::score_rank = {};
