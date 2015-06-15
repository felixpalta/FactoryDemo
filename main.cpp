#include <iostream>
#include "nypizzastore.h"
#include "chicagopizzastore.h"

#include <memory>

using namespace std;

int main()
{
    NYPizzaStore newyork;

    unique_ptr<Pizza> pizza(newyork.order_pizza("Cheese"));

    pizza.reset(newyork.order_pizza("Clam"));
    pizza.reset(newyork.order_pizza("Veggie"));
    pizza.reset(newyork.order_pizza("Peperoni"));

    ChicagoPizzaStore chicago;

    pizza.reset(chicago.order_pizza("Cheese"));
    pizza.reset(chicago.order_pizza("Clam"));
    pizza.reset(chicago.order_pizza("Veggie"));
    pizza.reset(chicago.order_pizza("Peperoni"));

    return 0;
}

