#include "nypizzastore.h"
#include "nystylecheesepizza.h"
#include "nystyleclampizza.h"
#include <algorithm>

using namespace std;

Pizza* NYPizzaStore::create_pizza(std::string name) const
{
    transform(name.begin(), name.end(), name.begin(), ::tolower);

    try
    {
        if (name == "cheese")
            return new NYStyleCheesePizza();
        if (name == "clam")
            return new NYStyleClamPizza();
    }
    catch (bad_alloc& e)
    {
        cerr << e.what() << endl;
        return nullptr;
    }

    return nullptr;
}
