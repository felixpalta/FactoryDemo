#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "pizza.h"

class PizzaStore
{
private:
    virtual Pizza* create_pizza(std::string name) const = 0;
public:
    PizzaStore() = default;
    virtual ~PizzaStore() = default;

    virtual Pizza* order_pizza(std::string name) const final;

};

#endif // PIZZASTORE_H
