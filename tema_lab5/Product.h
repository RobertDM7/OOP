#pragma once
#include <string>

using namespace std;

class Product
{
public:
    Product(string name = "", int price = 0);
    virtual ~Product() = default;

    string getName();
    int getPrice();
    virtual void display();

protected:
    string name;
    int price;
};
