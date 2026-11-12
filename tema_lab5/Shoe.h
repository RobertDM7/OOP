#pragma once

#include <iostream>
#include "Product.h"
using namespace std;

class Shoe : public Product
{
public:
    Shoe(string name, int price, int size);

    int getSize();
    void display() override;

private:
    int size;
};
