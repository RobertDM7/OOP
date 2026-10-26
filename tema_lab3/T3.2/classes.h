#pragma once
#include <string>

using namespace std;
class Student
{
    public:

    Student(string name = "Not set", int age = 0, int grad = 0);
    int getGrade() const;
    int getAge() const;
    string getName() const;

    private:
    string name;
    int age;
    int grade;
};