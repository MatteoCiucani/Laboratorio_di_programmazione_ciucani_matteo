//
// Created by Matteo on 09/02/2023.
//

#ifndef LISTA_SPESA_USER_H
#define LISTA_SPESA_USER_H


#include "ShoppingList.h"
#include "Observer.h"
#include "Item.h"

using namespace std;

class User : public Observer {
public:

    User(const std::string &name) : name_(name) {}

    void Update(int count, const std::string &item_name) override {
        std::cout << name_ << ": Shopping list updated, " << count
                  << " items, latest item: " << item_name << std::endl;
    }

    std::vector<Item> shopping_list_;

private:
    std::string name_;

};


#endif //LISTA_SPESA_USER_H
