#pragma once
#include <string>
#include <vector>
using namespace std;
class Student
{
    public:

    Student(string name = "Not set", int age = 0, int grad = 0);
    ~Student();
    int getGrade() const;
    int getAge() const;
    static int getCount();
    string getName() const;
    static void DisplayBestStudent(const vector<Student>& students);
    private:
    static int count;
    string name;
    int age;
    int grade;
};