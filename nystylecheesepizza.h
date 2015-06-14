#ifndef NYSTYLECHEESEPIZZA_H
#define NYSTYLECHEESEPIZZA_H

#include "nystylepizza.h"

class NYStyleCheesePizza : public NYStylePizza
{
private:
    std::string name() const
    {
        return NYStylePizza::name() + " Cheese Pizza";
    }
public:
    NYStyleCheesePizza() = default;
};

#endif // NYSTYLECHEESEPIZZA_H
