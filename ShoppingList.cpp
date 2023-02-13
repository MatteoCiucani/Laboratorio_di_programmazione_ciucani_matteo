//
// Created by Matteo on 09/02/2023.
//

#include "ShoppingList.h"
#include <iostream>
#include "Item.h"

void ShoppingList::AddItem(int count, const std::string &item_name) {
    Item item = {item_name, count};
    items_.push_back(item);
    NotifyObservers();
}

void ShoppingList::RemoveItem(const std::string &item_name) {
    auto it = std::find_if(items_.begin(), items_.end(), [&](const Item &item) { return item.name == item_name; });
    if (it != items_.end()) {
        items_.erase(it);
        NotifyObservers();
    }
}


void ShoppingList::Attach(Observer *observer) {
    observers_.push_back(observer);
}

void ShoppingList::Detach(Observer *observer) {
    auto it = std::find(observers_.begin(), observers_.end(), observer);
    if (it != observers_.end()) {
        observers_.erase(it);
    }
}

void ShoppingList::NotifyObservers() {
    for (Observer *observer: observers_) {
        observer->Update(items_.size(), items_.back().name);
    }
}

/*void ShoppingList::updateItem(int count, const Item &item) {
    auto it = std::find(items_.begin(), items_.end(), item);
    if (it != items_.end()) {
        it->count = count;
        NotifyObservers();
    }

}*/


