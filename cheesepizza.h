#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza.h"

class CheesePizza : public Pizza
{
private:
    std::string name() const
    {
        return "Cheese";
    }
};

#endif // CHEESEPIZZA_H
