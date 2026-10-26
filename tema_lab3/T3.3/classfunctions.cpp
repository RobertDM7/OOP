#include "classes.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(string name, int age, int grade)
{
    this -> name = name;
    this -> age = age;
    this -> grade = grade;
}

int Student::getGrade() const
{
    return this -> grade;
}

int Student::getAge() const
{
    return this -> age;
}

string Student::getName() const
{
    return this -> name;
}
