#pragma once

#include <iostream>
#include "Product.h"
using namespace std;

class Shoe : public Product
{
    public:

    Shoe(string name, int price, int size) : Product(name, price), size(size){}

    int getSize()
    {
        return size;
    }

    private:
    int size;
};