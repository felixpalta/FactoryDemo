#ifndef CHICAGOSTYLECHEESEPIZZA_H
#define CHICAGOSTYLECHEESEPIZZA_H

#include "chicagostylepizza.h"

class ChicagoStyleCheesePizza : public ChicagoStylePizza
{
private:
    std::string name() const override
    {
        return ChicagoStylePizza::name() + " Cheese Pizza";
    }
public:
    ChicagoStyleCheesePizza() = default;
};

#endif // CHICAGOSTYLECHEESEPIZZA_H
