#include "pizzastore.h"
#include <iostream>

using namespace std;

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
    else
    {
        cerr << "Cannot create pizza: " << name << endl;
    }

    return p;
}
