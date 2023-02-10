//
// Created by Matteo on 09/02/2023.
//

#ifndef LISTA_SPESA_SHOPPINGLIST_H
#define LISTA_SPESA_SHOPPINGLIST_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Observer.h"
#include "Item.h"

class ShoppingList {
public:
    ShoppingList() = default;

    ~ShoppingList() = default;

    void AddItem(int count, const std::string &item_name);

    void RemoveItem(const std::string &item_name);

    void Attach(Observer *observer);

    void Detach(Observer *observer);

    void updateItem(int count, const Item &item);

    void NotifyObservers();

    std::vector<Item> items_;
private:

    std::vector<Observer *> observers_;

};


#endif //LISTA_SPESA_SHOPPINGLIST_H
