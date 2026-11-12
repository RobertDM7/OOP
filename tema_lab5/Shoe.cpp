#include "Shoe.h"

using namespace std;

Shoe::Shoe(string name, int price, int size) : Product(name, price), size(size)
{}

int Shoe::getSize()
{
    return size;
}

void Shoe::display()
{
    Product::display();
    cout << ", Marime: " << size << "\n";
}
