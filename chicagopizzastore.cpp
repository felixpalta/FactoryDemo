#include "chicagopizzastore.h"
#include "chicagoingredientfactory.h"

ChicagoPizzaStore::ChicagoPizzaStore()
{
    ingredients.reset(new ChicagoIngredientFactory());
}


