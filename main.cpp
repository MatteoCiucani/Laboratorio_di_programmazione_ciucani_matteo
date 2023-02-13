#include <iostream>
#include "ShoppingList.h"
#include "User.h"
#include "Observer.h"
#include "Item.h"

int main() {


    ShoppingList list;
    User user1("Matteo");
    User user2("Elisa");
    User user3("alessandro");

    list.Attach(&user1);
    list.Attach(&user2);
    list.Attach(&user3);




    list.AddItem(2, "Banana");
    list.AddItem(3, "Carrot");
    list.AddItem(4, "eggs");
    list.RemoveItem("Banana");


    list.NotifyObservers();


    return 0;
}
