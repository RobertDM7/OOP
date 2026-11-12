#include "Toy.h"

using namespace std;

Toy::Toy(string name, int price, int age) : Product(name, price), age(age)
{}

int Toy::getAge()
{
    return age;
}

void Toy::display()
{
    Product::display();
    cout << ", Varsta: " << age << "+\n";
}
