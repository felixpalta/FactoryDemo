#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

#include "pizzaingredientfactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    Dough get_dough() const override
    {
        return "Thin Crust Dough";
    }

    Sauce get_sauce() const override
    {
        return "Marinara Sauce";
    }

    Cheese get_cheese() const override
    {
        return "Reggiano Cheese";
    }

    Peperoni get_peperoni() const override
    {
        return "Sliced Peperoni";
    }

    Clams get_clams() const override
    {
        return "Fresh Clams From Long Island Sound";
    }

    Veggies get_veggies() const override
    {
        return Veggies{"Garlic", "Onion", "Mushroom", "Red Pepper"};
    }
};

#endif // NYPIZZAINGREDIENTFACTORY_H
