#include <iostream>
#include <algorithm>
#include "Group.h"
#include "Student.h"

using namespace std;

vector<Group *> Group::allGroups;

Group::Group(const string &name, const string &faculty) : name(name), faculty(faculty)
{
    allGroups.push_back(this);
}

Group::~Group()
{
    allGroups.erase(remove(allGroups.begin(), allGroups.end(), this), allGroups.end());
}

void Group::addStudent(const Student &s)
{
    students.push_back(s);
}

void Group::display() const
{
    cout << "Grupa " << name << " - " << faculty << "\n";
    for (const Student &s : students)
        s.display();
}

void Group::displayAll()
{
    for (const Group *g : allGroups)
        g->display();
}
