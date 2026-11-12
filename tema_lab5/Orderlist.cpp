#include "Orderlist.h"

using namespace std;

void OrderList::addOrder(Order order)
{
    orders.push_back(order);
}

vector<Product> OrderList::searchProduct(string productName)
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

void OrderList::displayOrdersTotalValues()
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

const vector<Order> OrderList::getOrders()
{
    return orders;
}
