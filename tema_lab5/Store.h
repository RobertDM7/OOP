#pragma once
#include <string>
#include "Shoe.h"
#include "Toy.h"
#include "Product.h"
using namespace std;

class Store
{
    public:
    Store(string name)
    {
        this -> name = name;
    }

    void addShoe(Shoe shoe)
    {
        shoes.push_back(shoe);
        products.push_back(shoe);
    }

    void addShoes(vector<Shoe> shoes)
    {
        for (auto shoe : shoes)
        {
            this -> shoes.push_back(shoe);
            products.push_back(shoe);
        }
    }

    void addToy (Toy toy)
    {
        toys.push_back(toy);
        products.push_back(toy);
    }

    void addToys(vector<Toy> toys)
    {
        for (auto toy : toys)
        {
            this -> toys.push_back(toy);
            products.push_back(toy);
        }
    }

    void findProduct(string name)
    {
        for (auto shoe : shoes)
        {
            if (shoe.getName() == name)
                {
                    cout << name << " was found!\n";
                    return;
                }
        }

        for (auto toy : toys)
        {
            if (toy.getName() == name)
                {
                    cout << name << " was found!\n";
                    return;
                }
        }

        cout << "We didn't find the product\n";
    }

    void removeProduct(string name)
    {
        int products_removed  = 0;
        for (int i = 0; i < shoes.size(); i++)
        {
            if (shoes[i].getName() == name)
                {
                    shoes.erase(shoes.begin() + i);
                    i--;
                    products_removed ++;
                }
        }

        for (int i = 0; i < toys.size(); i++)
        {
            if (toys[i].getName() == name)
                {
                    toys.erase(toys.begin() + i);
                    i--;
                    products_removed ++;
                }
        }

        for (int i = 0; i < products.size(); i++)
        {
            if (products[i].getName() == name)
            {
                products.erase(products.begin() + i);
                i--;
            }
        }

        cout << products_removed << " products were removed\n";
    }

    void showProducts()
    {
        sort(products.begin(), products.end(), [](Product a, Product b)
    {
        if (a.getName() == b.getName())
            return a.getPrice() > b.getPrice();
            else
            return a.getName() > b.getName();
    });
        for (auto product : products)
        {
            cout << "Product name: " << product.getName() << ", product price: " << product.getPrice() << "\n";
        }
    }

    void showProducts()
    {
        sort(products.begin(), products.end(), [](Product a, Product b)
    {
        if (a.getName() == b.getName())
            return a.getPrice() > b.getPrice();
            else
            return a.getName() > b.getName();
    });
        for (auto product : products)
        {
            cout << "Product name: " << product.getName() << ", product price: " << product.getPrice() << "\n";
        }
    }

    void displayShoesList(const vector<Shoe> shoesList)
    {
        cout << "Shoes list:\n";
        for (auto shoe : shoesList) {
            cout << "Nume: " << shoe.getName() << ", Pret: " << shoe.getPrice() << ", Marime: " << shoe.getSize() << "\n";
    }
}

    private:

    string name;
    vector<Shoe> shoes;
    vector<Toy> toys;
    vector<Product> products;
};