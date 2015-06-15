#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "pizza.h"

class VeggiePizza : public Pizza
{
public:
    VeggiePizza(const PizzaIngredientFactory& pif);
private:
    std::string name() const override;
    void prepare() const override;
};

#endif // VEGGIEPIZZA_H
