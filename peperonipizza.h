#ifndef PEPERONIPIZZA_H
#define PEPERONIPIZZA_H

#include "pizza.h"

class PeperoniPizza : public Pizza
{
private:
    std::string name() const
    {
        return "Peperoni";
    }
};

#endif // PEPERONIPIZZA_H
