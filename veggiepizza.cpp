#include "veggiepizza.h"
#include <iostream>
using namespace std;

VeggiePizza::VeggiePizza(const PizzaIngredientFactory &pif)
    : Pizza(pif)
{
}

string VeggiePizza::name() const
{
    return "Veggie Pizza";
}
void VeggiePizza::prepare() const
{
    Pizza::prepare();
    cout << "Adding veggies: ";
    for (auto& x : ingredients.get_veggies())
        cout << x << ", ";
    cout << endl;
}
