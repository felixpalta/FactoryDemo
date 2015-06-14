#include <iostream>
#include "pizzastore.h"
using namespace std;

int main()
{
    SimplePizzaFactory pf;
    PizzaStore pstore(pf);

    Pizza *p = pstore.order_pizza("PePeRoNi");
    delete p;

    return 0;
}

