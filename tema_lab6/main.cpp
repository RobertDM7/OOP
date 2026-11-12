#include "Group.h"
#include "Student.h"

using namespace std;

int main()
{
    Group calc("1A", "Calculatoare");
    Group med("2B", "Medicina");
    Group drept("3C", "Drept");

    calc.addStudent(Group::Student(1, "Ana", "Popescu", 9.50));
    calc.addStudent(Group::Student(2, "Mihai", "Ionescu", 8.25));
    calc.addStudent(Group::Student(3, "Elena", "Radu", 9.10));

    med.addStudent(Group::Student(10, "Ioana", "Dumitru", 9.90));
    med.addStudent(Group::Student(11, "Vlad", "Georgescu", 8.00));

    Group::displayAll();
    return 0;
}
