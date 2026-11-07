#pragma once

#include <iostream>
#include "Product.h"
using namespace std;

class Toy : public Product
{
    public:

    Toy(string name, int price, int age) : Product(name, price), age(age){}

    int getAge()
    {
        return age;
    }

    private:
    int age;
};