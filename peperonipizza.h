#ifndef PEPERONIPIZZA_H
#define PEPERONIPIZZA_H

#include "pizza.h"

class PeperoniPizza : public Pizza
{
public:
    PeperoniPizza(const PizzaIngredientFactory& pif);
private:
    std::string name() const override;
    void prepare() const override;
};

#endif // PEPERONIPIZZA_H
