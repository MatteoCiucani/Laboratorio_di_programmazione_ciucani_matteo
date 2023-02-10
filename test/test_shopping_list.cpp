//
// Created by Matteo on 09/02/2023.
//

#include "gtest/gtest.h"
#include "../ShoppingList.h"
#include "../User.h"
#include "../Item.h"

TEST(ShoppingList, AddItem) {
    ShoppingList list;
    User user1("User 1");
    User user2("User 2");
    list.Attach(&user1);
    list.Attach(&user2);

    list.AddItem(1, "Apple");
    list.AddItem(2, "Banana");
    EXPECT_EQ(2, list.items_.size());
}

TEST(ShoppingList, RemoveItem) {
    ShoppingList list;
    User user1("Matteo");
    User user2("Elisa");
    User user3("alessandro");

    list.Attach(&user1);
    list.Attach(&user2);
    list.Attach(&user3);

    list.AddItem(1, "Apple");
    list.AddItem(2, "Banana");
    list.AddItem(3, "Carrot");
    list.AddItem(4, "eggs");
    list.RemoveItem("Apple");

    EXPECT_EQ(1, list.items_.size());
    EXPECT_EQ("Banana", list.items_[0].name);
}