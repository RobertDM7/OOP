#include "classes.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<Student> students; 

    students.push_back(Student("Andrei", 13, 3));
    students.push_back(Student("Marius", 14, 10));
    students.push_back(Student("Robert", 11, 10));
    students.push_back(Student("Daniel", 13, 9));
    students.push_back(Student("Cristian", 13, 9));

    sort(students.begin(), students.end(), [](const Student& s1, const Student& s2)
{
    int grades1 = s1.getGrade();
    int grades2 = s2.getGrade();
    if (grades1 == grades2)
    {
        int ages1 = s1.getAge();
        int ages2 = s2.getAge();
        if (ages1 == ages2)
        {
            string names1 = s1.getName();
            string names2 = s2.getName();
            return names1 < names2;
        }
        else
            return ages1 > ages2;
    }
    else
        return grades1 > grades2;
});

    for (const Student& s : students)
    {
        cout << s.getName() << " ";
    }
    return 0;
}