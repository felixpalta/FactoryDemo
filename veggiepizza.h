#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "pizza.h"

class VeggiePizza : public Pizza
{
private:
    std::string name() const
    {
        return "Veggie";
    }
};

#endif // VEGGIEPIZZA_H
