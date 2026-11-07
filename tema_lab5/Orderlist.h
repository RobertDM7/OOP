#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Order.h"
#include "Product.h"

using namespace std;

class OrderList
{
public:

    void addOrder(Order order)
    {
        orders.push_back(order);
    }

    vector<Product> searchProduct(string productName)
    {
        vector<Product> foundProducts;

        for (auto order : orders)
        {
            for (auto shoe : order.getShoes())
            {
                if (shoe.getName() == productName)
                {
                    foundProducts.push_back(shoe);
                }
            }

            for (auto toy : order.getToys())
            {
                if (toy.getName() == productName)
                {
                    foundProducts.push_back(toy);
                }
            }
        }

        return foundProducts;
    }

    void displayOrdersTotalValues()
    {
        int grandTotal = 0;
        for (auto order : orders)
        {
            int orderVal = order.getTotalValue();
            cout << "Comanda ID " << order.getId() << " are valoarea totala: " << orderVal << " lei\n";
            grandTotal += orderVal;
        }
        cout << "Valoarea totala a tuturor comenzilor: " << grandTotal << " lei\n";
    }

    const vector<Order> getOrders()
    { 
        return orders; 
    }

private:
    vector<Order> orders;
};