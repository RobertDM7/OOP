#include "Order.h"

using namespace std;

Order::Order(int id) : id(id)
{}

void Order::addShoeToOrder(Shoe shoe)
{
    shoes.push_back(shoe);
}

void Order::addToyToOrder(Toy toy)
{
    toys.push_back(toy);
}

int Order::getId() const
{
    return id;
}

vector<Shoe> Order::getShoes()
{
    return shoes;
}

vector<Toy> Order::getToys()
{
    return toys;
}

int Order::getTotalValue()
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
