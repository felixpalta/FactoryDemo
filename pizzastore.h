#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "simplepizzafactory.h"

class PizzaStore
{
private:
    const SimplePizzaFactory& _pizzafact;
public:
    PizzaStore(const SimplePizzaFactory& pf);
    Pizza* order_pizza(std::string name) const;
};

#endif // PIZZASTORE_H
