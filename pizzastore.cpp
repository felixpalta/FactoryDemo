#include "pizzastore.h"

Pizza* PizzaStore::order_pizza(std::string name) const
{
    Pizza *p = create_pizza(name);

    if (p)
    {
        p->prepare();
        p->bake();
        p->cut();
        p->box();
    }

    return p;
}
