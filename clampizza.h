#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H

#include "pizza.h"

class ClamPizza : public Pizza
{
private:
    std::string name() const
    {
        return "Clam";
    }
};

#endif // CLAMPIZZA_H
