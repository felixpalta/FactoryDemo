#include "nypizzastore.h"
#include "nypizzaingredientfactory.h"

NYPizzaStore::NYPizzaStore()
{
    ingredients.reset(new NYPizzaIngredientFactory());
}
