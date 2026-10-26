#include "classes.h"
#include <iostream>
#include <string>

using namespace std;

int Student::count = 0;

Student::Student(string name, int age, int grade)
{
    this->name = name;
    this->age = age;
    this->grade = grade;
    this->count++;
}

Student::~Student()
{
    count--;
}

int Student::getCount()
{
    return count;
}

int Student::getGrade() const
{
    return this->grade;
}

int Student::getAge() const
{
    return this->age;
}

string Student::getName() const
{
    return this->name;
}

void Student::DisplayBestStudent(const vector<Student> &students)
{
    int maxgrade = -1;
    if (students.empty())
        cout << "No students\n";

    for (const Student &s : students)
    {
        int grade = s.getGrade();
        if (grade > maxgrade)
            maxgrade = grade;
    }

    for (const Student &s : students)
    {
        int grade = s.getGrade();
        if (grade == maxgrade)
            cout << s.getName() << ": " << grade << " ";
    }
}