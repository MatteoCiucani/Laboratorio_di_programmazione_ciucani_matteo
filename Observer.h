//
// Created by Matteo on 09/02/2023.
//

#ifndef LISTA_SPESA_OBSERVER_H
#define LISTA_SPESA_OBSERVER_H


#include <vector>
#include "Item.h"


class Observer {
public:
    virtual void Update(int count, const std::string &item_name) = 0;
};


#endif //LISTA_SPESA_OBSERVER_H
