//
// Created by Matteo on 10/02/2023.
//

//Questo codice include un file di test per la classe User.
//Crea un'istanza di User e verifica che il metodo Update funzioni correttamente aggiungendo un elemento alla lista della spesa dell'utente.
//In questo caso, i test verificano che l'elemento sia stato correttamente aggiunto alla lista e che la sua dimensione sia corretta.

#include "gtest/gtest.h"
#include "../User.h"
#include "../Item.h"

class UserTest : public ::testing::Test {
protected:
    User user;

    UserTest() : user("Matteo") {}
};

TEST_F(UserTest, Update) {

    user.Update(1, "Apple");

    EXPECT_EQ(0, user.shopping_list_.size());
    EXPECT_EQ("Apple", user.shopping_list_[0].name);
}