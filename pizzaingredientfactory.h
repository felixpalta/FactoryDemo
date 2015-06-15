#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H

#include <string>
#include <vector>

class PizzaIngredientFactory
{

protected:
    PizzaIngredientFactory() = default;
public:
    virtual ~PizzaIngredientFactory() = default;

    using Dough = std::string;
    using Sauce = std::string;
    using Cheese = std::string;
    using Peperoni = std::string;
    using Clams = std::string;
    using Veggies = std::vector<std::string>;

    virtual Dough get_dough() const = 0;
    virtual Sauce get_sauce() const = 0;
    virtual Cheese get_cheese() const = 0;
    virtual Peperoni get_peperoni() const = 0;
    virtual Clams get_clams() const = 0;
    virtual Veggies get_veggies() const = 0;

};

#endif // PIZZAINGREDIENTFACTORY_H
