#pragma once

#include <string>
#include <vector>

using namespace std;

class Group
{
public:
    class Student;

    Group(const string &name, const string &faculty);
    ~Group();
    void addStudent(const Student &s);

    const string &getName() const
    {
        return name;
    }
    const string &getFaculty() const
    {
        return faculty;
    }
    const vector<Student> &getStudents() const
    {
        return students;
    }

    void display() const;
    static void displayAll();

private:
    static vector<Group *> allGroups;

    string name;
    string faculty;
    vector<Student> students;
};
