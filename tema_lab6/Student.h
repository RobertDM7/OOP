#pragma once

#include <iostream>
#include <string>
#include "Group.h"

using namespace std;

class Group::Student
{
public:
    Student(int id, const string &firstName, const string &lastName, double average);

    int getId() const;
    const string &getFirstName() const;

    const string &getLastName() const;

    double getAverage() const;


    void display() const;


private:
    int id;
    string firstName;
    string lastName;
    double average;
};
