#include "classes.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << Student::getCount() << " ";
    Student *s1 = new Student("Andrei", 13, 3);
    Student *s2 = new Student("Marius", 14, 10);
    cout << Student::getCount() << " ";
    Student *s3 = new Student("Robert", 11, 10);
    Student *s4 = new Student("Daniel", 13, 9);
    Student *s5 = new Student("Cristian", 13, 9);
    cout << Student::getCount() << " ";

    delete s3;
    cout << Student::getCount() << " ";

    return 0;
}