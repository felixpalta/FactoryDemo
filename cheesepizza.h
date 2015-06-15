#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza.h"

class CheesePizza : public Pizza
{
private:
    std::string name() const override
    {
        return "Cheese Pizza";
    }
public:
    CheesePizza(const PizzaIngredientFactory& pif);
};

#endif // CHEESEPIZZA_H
