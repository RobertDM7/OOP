#include <iostream>
#include <vector>
#include "Store.h"
#include "Shoe.h"
#include "Toy.h"
#include "Order.h"
#include "Orderlist.h"

using namespace std;

int main()
{
    Store myStore("Magazin de incaltari si jucarii");

    myStore.addShoe(Shoe("Nike", 500, 42));
    myStore.addToy(Toy("Lego", 150, 6));

    vector<Shoe> extraShoes = {Shoe("Adidas", 400, 41), Shoe("Puma", 300, 43), Shoe("Nike", 550, 40)};
    myStore.addShoes(extraShoes);

    vector<Toy> extraToys = { Toy("Monopoly", 120, 8), Toy("Rubik Cube", 50, 10)};
    myStore.addToys(extraToys);

    myStore.findProduct("Adidas");
    myStore.findProduct("ProdusInexistent");
    cout << "\n";

    myStore.showProducts();
    cout << "\n";

    vector<Shoe> customShoesList = { Shoe("Reebok", 350, 39), Shoe("Vans", 320, 41)};
    myStore.displayShoesList(customShoesList);
    cout << "\n";

    OrderList orderlist;

    Order ord1(101);
    ord1.addShoeToOrder(Shoe("Nike", 500, 42));
    ord1.addToyToOrder(Toy("Lego", 150, 6));

    Order ord2(102);
    ord2.addShoeToOrder(Shoe("Nike", 550, 40));
    ord2.addToyToOrder(Toy("Monopoly", 120, 8));

    orderlist.addOrder(ord1);
    orderlist.addOrder(ord2);

    vector<Product> foundProducts = orderlist.searchProduct("Nike");
    for (auto p : foundProducts)
    {
        cout << "Produs: " << p.getName() << ", Pret: " << p.getPrice() << " lei\n";
    }
    cout << "\n";

    orderlist.displayOrdersTotalValues();
    cout << "\n";

    myStore.removeProduct("Puma");
    myStore.showProducts();

    return 0;
}