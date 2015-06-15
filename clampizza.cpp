#include "clampizza.h"
#include <iostream>

using namespace std;

ClamPizza::ClamPizza(const PizzaIngredientFactory& pif)
    : Pizza(pif)
{

}

string ClamPizza::name() const
{
    return "Clam Pizza";
}

void ClamPizza::prepare() const
{
    Pizza::prepare();
    cout << "Adding clams: " << ingredients.get_clams() << '\n';
}
