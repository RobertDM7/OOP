#include <iostream>
#include <algorithm>
#include "Store.h"

using namespace std;

Store::Store(string name)
{
    this->name = name;
}

void Store::addShoe(Shoe shoe)
{
    shoes.push_back(shoe);
}

void Store::addShoes(vector<Shoe> shoes)
{
    for (auto shoe : shoes)
    {
        this->shoes.push_back(shoe);
    }
}

void Store::addToy(Toy toy)
{
    toys.push_back(toy);
}

void Store::addToys(vector<Toy> toys)
{
    for (auto toy : toys)
    {
        this->toys.push_back(toy);
    }
}

Product* Store::findProduct(string name)
{
    for (auto& shoe : shoes)
    {
        if (shoe.getName() == name)
        {
            return &shoe;
        }
    }

    for (auto& toy : toys)
    {
        if (toy.getName() == name)
        {
            return &toy;
        }
    }

    return nullptr;
}

void Store::removeProduct(string name)
{
    int products_removed = 0;
    for (int i = 0; i < shoes.size(); i++)
    {
        if (shoes[i].getName() == name)
        {
            shoes.erase(shoes.begin() + i);
            i--;
            products_removed++;
        }
    }

    for (int i = 0; i < toys.size(); i++)
    {
        if (toys[i].getName() == name)
        {
            toys.erase(toys.begin() + i);
            i--;
            products_removed++;
        }
    }

    cout << products_removed << " products were removed\n";
}

void Store::showProducts()
{
    vector<Product*> all;
    for (auto& shoe : shoes)
    {
        all.push_back(&shoe);
    }
    for (auto& toy : toys)
    {
        all.push_back(&toy);
    }

    sort(all.begin(), all.end(), [](Product* a, Product* b)
    {
        if (a->getName() == b->getName())
            return a->getPrice() < b->getPrice();
        else
            return a->getName() < b->getName();
    });

    for (auto product : all)
    {
        product->display();
    }
}

void Store::displayShoesList(const vector<Shoe> shoesList)
{
    cout << "Shoes list:\n";
    for (auto shoe : shoesList)
    {
        cout << "Nume: " << shoe.getName() << ", Pret: " << shoe.getPrice() << ", Marime: " << shoe.getSize() << "\n";
    }
}
