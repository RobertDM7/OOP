#pragma once
#include <vector>
#include <iostream>
#include "Shoe.h"
#include "Toy.h"
#include "Product.h"

using namespace std;

class Order
{
    public:
    Order(int id) : id(id) {}

    void addShoeToOrder(Shoe shoe)
    {
        shoes.push_back(shoe);
    }

    void addToyToOrder(Toy toy)
    {
        toys.push_back(toy);
    }

    int getId() const
    {
        return id;
    }

    vector<Shoe> getShoes()
    { 
        return shoes; 
    }
    vector<Toy> getToys()
    { 
        return toys;
    }

    int getTotalValue()
    {
        int total = 0;
        for (auto shoe : shoes)
        {
            total += shoe.getPrice();
        }
        for (auto toy : toys)
        {
            total += toy.getPrice();
        }
        return total;
    }

    private:
        int id;
        vector<Shoe> shoes;
        vector<Toy> toys;
};
