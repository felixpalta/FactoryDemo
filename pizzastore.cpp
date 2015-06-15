#include "pizzastore.h"
#include "cheesepizza.h"
#include "clampizza.h"
#include "peperonipizza.h"
#include "veggiepizza.h"

#include <algorithm>
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

Pizza* PizzaStore::create_pizza(std::string name) const
{
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    try
    {
        if (name == "cheese")
            return new CheesePizza(*ingredients);
        if (name == "clam")
            return new ClamPizza(*ingredients);
        if (name == "veggie")
            return new VeggiePizza(*ingredients);
        if (name == "peperoni")
            return new PeperoniPizza(*ingredients);
    }
    catch (bad_alloc& e)
    {
        cerr << e.what() << endl;
    }

    return nullptr;
}
