#pragma once
#include <vector>
#include <string>
#include "Shoe.h"
#include "Toy.h"
#include "Product.h"
using namespace std;

class Store
{
public:
    Store(string name);

    void addShoe(Shoe shoe);
    void addShoes(vector<Shoe> shoes);
    void addToy(Toy toy);
    void addToys(vector<Toy> toys);

    Product* findProduct(string name);
    void removeProduct(string name);
    void showProducts();
    void displayShoesList(const vector<Shoe> shoesList);

private:
    string name;
    vector<Shoe> shoes;
    vector<Toy> toys;
};
