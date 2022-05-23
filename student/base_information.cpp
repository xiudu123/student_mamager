#include "base_information.h"

Base_Information::Base_Information()
{
    this -> num = this -> name = this -> sex = "";
    this -> age = 17;
}

Base_Information::Base_Information(QString num, QString name, QString sex, int age)
{
    this -> num = num, this -> name = name, this -> sex = sex, this -> age = age;
}

//void Base_Information::registered()
//{

//}

//void Base_Information::logout()
//{

//}

//Base_Information::~Base_Information()
//{

//}
