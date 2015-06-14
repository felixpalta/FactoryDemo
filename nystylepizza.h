#ifndef NYSTYLEPIZZA_H
#define NYSTYLEPIZZA_H

#include "pizza.h"

class NYStylePizza : public Pizza
{
protected:
    std::string name() const override
    {
        return "NY Style";
    }
private:
    std::string dough() const override
    {
        return "Thin Crust Dough";
    }
    std::string sauce() const override
    {
        return "Marinara Sauce";
    }
protected:
    NYStylePizza()
    {
        toppings.push_front("Grated Regiano Cheese");
    }
};

#endif // NYSTYLEPIZZA_H
