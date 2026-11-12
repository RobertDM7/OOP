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
    void addOrder(Order order);
    vector<Product> searchProduct(string productName);
    void displayOrdersTotalValues();
    const vector<Order> getOrders();

private:
    vector<Order> orders;
};
