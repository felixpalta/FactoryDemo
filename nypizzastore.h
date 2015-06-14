#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "pizzastore.h"

class NYPizzaStore : public PizzaStore
{
private:
    Pizza* create_pizza(std::string name) const override;
public:
    NYPizzaStore() = default;
};

#endif // NYPIZZASTORE_H
