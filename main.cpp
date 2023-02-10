#include <iostream>
#include "ShoppingList.h"
#include "User.h"
#include "Observer.h"
#include "Item.h"

int main() {
    /*
    ShoppingList list;
    User user1("Luca");
    User user2("Francesca");

    list.Attach(&user1);
    list.Attach(&user2);


    list.AddItem(2, "latte");
    list.AddItem(1, "pane");


    list.AddItem(12, "uova");

    Item item2 = {"pane", 1};
    list.RemoveItem("pane");

    Item item4 = {"Burro", 1};
    list.updateItem(1, item4);*/

    ShoppingList list;
    User user1("Matteo");
    User user2("Elisa");
    User user3("alessandro");

    list.Attach(&user1);
    list.Attach(&user2);
    list.Attach(&user3);

    /*Item item1 = {"apple", 2};
    Item item2 ={"banana", 3};
    Item item3 ={"carrot", 5};
    Item Item4 = {"eggs", 12};*/


    list.AddItem(2, "Banana");
    list.AddItem(3, "Carrot");
    list.AddItem(4, "eggs");


    list.NotifyObservers();


    return 0;
}
