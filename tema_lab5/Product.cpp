#include <iostream>
#include "Product.h"

using namespace std;

Product::Product(string name, int price)
{
    this->name = name;
    this->price = price;
}

string Product::getName()
{
    return name;
}

int Product::getPrice()
{
    return price;
}

void Product::display()
{
    cout << "Nume: " << name << ", Pret: " << price;
}
