#ifndef CHICAGOSTYLEPIZZA_H
#define CHICAGOSTYLEPIZZA_H

#include "pizza.h"

class ChicagoStylePizza : public Pizza
{
protected:
    std::string name() const override
    {
        return "Chicago Style";
    }
private:
    std::string dough() const override
    {
        return "Extra Thick Crust Dough";
    }
    std::string sauce() const override
    {
        return "Plum Tomato Sauce";
    }
protected:
    ChicagoStylePizza()
    {
        toppings.push_front("Shredded Mozzarella Cheese");
    }
public:
    void cut() const override
    {
        std::cout << "Cutting the " << name() << " pizza in SQUARE slices.\n";
    }
};

#endif // CHICAGOSTYLEPIZZA_H
