#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "pizzastore.h"

class ChicagoPizzaStore : public PizzaStore
{
private:
    Pizza* create_pizza(std::string name) const override;
public:
    ChicagoPizzaStore() = default;
};

#endif // CHICAGOPIZZASTORE_H
