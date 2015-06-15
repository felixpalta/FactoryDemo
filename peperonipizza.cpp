#include "peperonipizza.h"
#include <iostream>
using namespace std;

PeperoniPizza::PeperoniPizza(const PizzaIngredientFactory &pif)
    : Pizza(pif)
{
}

string PeperoniPizza::name() const
{
    return "Veggie Pizza";
}
void PeperoniPizza::prepare() const
{
    Pizza::prepare();
    cout << "Adding veggies: ";
    for (auto& x : ingredients.get_veggies())
        cout << x << ", ";
    cout << '\n';
    cout << "Adding peperoni: " << ingredients.get_peperoni() << endl;
}
