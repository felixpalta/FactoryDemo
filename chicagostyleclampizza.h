#ifndef CHICAGOSTYLECLAMPIZZA_H
#define CHICAGOSTYLECLAMPIZZA_H

#include "chicagostylepizza.h"

class ChicagoStyleClamPizza : public ChicagoStylePizza
{
private:
    std::string name() const override
    {
        return ChicagoStylePizza::name() + " Clam Pizza";
    }
public:
    ChicagoStyleClamPizza()
    {
        toppings.push_front("Frozen Clams From Chesapeak Bay");
    }
};

#endif // CHICAGOSTYLECLAMPIZZA_H
