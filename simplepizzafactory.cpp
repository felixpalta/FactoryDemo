#include "simplepizzafactory.h"
#include "veggiepizza.h"
#include "peperonipizza.h"
#include "clampizza.h"
#include "cheesepizza.h"
#include <algorithm>

using namespace std;


Pizza* SimplePizzaFactory::create_pizza(std::string name) const
{
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    try
    {
        if (name == "peperoni")
            return new PeperoniPizza();
        if (name == "cheese")
            return new CheesePizza();
        if (name == "clam")
            return new ClamPizza();
        if (name == "veggie")
            return new VeggiePizza();
    }
    catch (bad_alloc& e)
    {
        cerr << e.what() << endl;
        return nullptr;
    }

    return nullptr;
}
