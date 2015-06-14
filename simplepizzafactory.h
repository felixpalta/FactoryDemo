#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "pizza.h"

class SimplePizzaFactory
{
public:
    virtual Pizza* create_pizza(std::string name) const;
    virtual ~SimplePizzaFactory() = default;
};

#endif // SIMPLEPIZZAFACTORY_H
