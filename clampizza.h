#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H

#include "pizza.h"

class ClamPizza : public Pizza
{
public:
    ClamPizza(const PizzaIngredientFactory& pif);

private:
    std::string name() const;
    void prepare() const override;


};

#endif // CLAMPIZZA_H
