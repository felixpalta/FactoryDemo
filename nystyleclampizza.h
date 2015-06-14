#ifndef NYSTYLECLAMPIZZA_H
#define NYSTYLECLAMPIZZA_H

#include "nystylepizza.h"

class NYStyleClamPizza : public NYStylePizza
{
private:
    std::string name() const
    {
        return NYStylePizza::name() + " Clam Pizza";
    }
public:
    NYStyleClamPizza()
    {
        toppings.push_front("Fresh Clams From Long Island Sound");
    }
};

#endif // NYSTYLECLAMPIZZA_H
