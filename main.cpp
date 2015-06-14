#include <iostream>
#include "chicagopizzastore.h"
#include "nypizzastore.h"
#include <memory>

using namespace std;

int main()
{
    ChicagoPizzaStore chicago;
    NYPizzaStore newyork;

    unique_ptr<Pizza> pizza(chicago.order_pizza("Cheese"));

    pizza.reset(chicago.order_pizza("CLAM"));
    pizza.reset(chicago.order_pizza("Peperoni(INVALID)"));

    pizza.reset(newyork.order_pizza("Cheese"));
    pizza.reset(newyork.order_pizza("ClAm"));
    pizza.reset(newyork.order_pizza("Peperoni(INVALID"));

    return 0;
}

