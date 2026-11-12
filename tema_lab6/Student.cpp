#include <string>
#include <iostream>
#include "Group.h"
#include "Student.h"

using namespace std;

Group::Student::Student(int id, const string &firstName, const string &lastName, double average) : id(id), firstName(firstName), lastName(lastName), average(average) 
{}

int Group::Student::getId() const
{
    return id;
}
const string& Group::Student::getFirstName() const
{
    return firstName;
}
const string& Group::Student::getLastName() const
{
    return lastName;
}
double Group::Student::getAverage() const
{
    return average;
}

void Group::Student::display() const
{
    cout << id << " " << firstName << " " << lastName << " " << average << "\n";
}