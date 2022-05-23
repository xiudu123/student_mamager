#ifndef BASE_INFORMATION_H
#define BASE_INFORMATION_H
#include <iostream>
#include <string>
#include <QString>
class Base_Information
{
protected:
    QString num, name, sex;
    int age;
public:
    Base_Information();
    Base_Information(QString num, QString name, QString sex, int age);
//    virtual void registered();
//    virtual void logout();
//    virtual ~Base_Information();

};

#endif // BASE_INFORMATION_H
