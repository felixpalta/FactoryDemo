#ifndef CHICAGOINGREDIENTFACTORY_H
#define CHICAGOINGREDIENTFACTORY_H

#include "pizzaingredientfactory.h"

class ChicagoIngredientFactory : public PizzaIngredientFactory
{
public:
    Dough get_dough() const override
    {
        return "Thick Crust Dough";
    }

    Sauce get_sauce() const override
    {
        return "Plum Tomato Sauce";
    }

    Cheese get_cheese() const override
    {
        return "Mozzarella Cheese";
    }

    Peperoni get_peperoni() const override
    {
        return "Sliced Peperoni";   // Same as in NY
    }

    Clams get_clams() const override
    {
        return "Frozen Clams";
    }

    Veggies get_veggies() const override
    {
        return Veggies{"Black Olives", "Spinach", "Eggplant"};
    }
};

#endif // CHICAGOINGREDIENTFACTORY_H
