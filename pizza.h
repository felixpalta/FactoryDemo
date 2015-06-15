#ifndef PIZZA_H
#define PIZZA_H

#include "pizzaingredientfactory.h"

#include <iostream>

class Pizza
{
private:
    virtual std::string name() const = 0;

protected:
    const PizzaIngredientFactory& ingredients;

protected:
    Pizza(const PizzaIngredientFactory& pif)
        : ingredients(pif)
    {
    }

public:
    virtual ~Pizza() = default;

public:
    virtual void prepare() const
    {
        std::cout   << "Making the " << name() << '\n'
                    << "Tossing dough: " << ingredients.get_dough() << '\n'
                    << "Adding sauce: " << ingredients.get_sauce() << '\n'
                    << "Adding cheese: " << ingredients.get_cheese() << '\n';
    }

    virtual void bake() const
    {
        std::cout << "Baking the " << name() << " pizza for 25 minutes at 350.\n";
    }
    virtual void cut() const
    {
        std::cout << "Cutting the " << name() << " pizza in DIAGONAL slices.\n";
    }
    virtual void  box() const
    {
        std::cout << "Place the " << name() << " pizza in official PizzaStore box.\n" << std::endl;
    }
};

#endif // PIZZA_H
