#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "pizza.h"
#include <memory>

class PizzaStore
{
private:
    virtual Pizza* create_pizza(std::string name) const;

protected:
    PizzaStore(): ingredients() {}

public:
    virtual ~PizzaStore() = default;

    virtual Pizza* order_pizza(std::string name) const final;

protected:
    std::unique_ptr<const PizzaIngredientFactory> ingredients;
};

#endif // PIZZASTORE_H
