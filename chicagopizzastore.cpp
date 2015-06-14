#include "chicagopizzastore.h"
#include "chicagostylecheesepizza.h"
#include "chicagostyleclampizza.h"
#include <algorithm>

using namespace std;

Pizza* ChicagoPizzaStore::create_pizza(std::string name) const
{
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    try
    {
        if (name == "cheese")
            return new ChicagoStyleCheesePizza();
        if (name == "clam")
            return new ChicagoStyleClamPizza();
    }
    catch (bad_alloc& e)
    {
        cerr << e.what() << endl;
        return nullptr;
    }

    return nullptr;
}
