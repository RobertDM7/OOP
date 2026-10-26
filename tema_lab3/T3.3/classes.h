#pragma once
#include <string>
#include <vector>
using namespace std;
class Student
{
    public:

    Student(string name = "Not set", int age = 0, int grad = 0);
    int getGrade() const;
    int getAge() const;
    string getName() const;
    static void DisplayBestStudent(const vector<Student>& students);

    private:
    string name;
    int age;
    int grade;
};