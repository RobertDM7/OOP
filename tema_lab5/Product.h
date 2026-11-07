#pragma once
#include <string>

using namespace std;

class Product
{
    public:

    Product(string name = "", int price = 0)
    {
        this -> name = name;
        this -> price = price;
    };

    string getName()
    {
        return name;
    }

    int getPrice()
    {
        return price;
    }

    protected:

    string name;
    int price;
};