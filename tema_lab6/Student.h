#pragma once

#include <iostream>
#include <string>
#include "Group.h"

using namespace std;

class Group::Student
{
public:
    Student(int id, const string &firstName, const string &lastName, double average) : id(id), firstName(firstName), lastName(lastName), average(average) {}

    int getId() const
    {
        return id;
    }
    const string &getFirstName() const
    {
        return firstName;
    }
    const string &getLastName() const
    {
        return lastName;
    }
    double getAverage() const
    {
        return average;
    }

    void display() const
    {
        cout << id << " " << firstName << " " << lastName << " " << average << "\n";
    }

private:
    int id;
    string firstName;
    string lastName;
    double average;
};
