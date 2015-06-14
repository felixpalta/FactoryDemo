#include "pizzastore.h"

PizzaStore::PizzaStore(const SimplePizzaFactory &pf)
    : _pizzafact(pf)
{
}

Pizza* PizzaStore::order_pizza(std::string name) const
{
    Pizza *p = _pizzafact.create_pizza(name);

    if (p)
    {
        p->prepare();
        p->bake();
        p->cut();
        p->box();
    }

    return p;
}
