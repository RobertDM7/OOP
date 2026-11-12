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
    Order(int id);

    void addShoeToOrder(Shoe shoe);
    void addToyToOrder(Toy toy);

    int getId() const;
    vector<Shoe> getShoes();
    vector<Toy> getToys();

    int getTotalValue();

private:
    int id;
    vector<Shoe> shoes;
    vector<Toy> toys;
};
