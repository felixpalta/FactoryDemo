#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>

/* Interface Pizza implements 'Non-Virtual Interface' idiom. */

class Pizza
{
private:
    virtual std::string name() const = 0;

protected:
    Pizza() = default;
public:
    virtual ~Pizza() = default;

public:
    void prepare() const
    {
        std::cout << "Making the " << name() << " pizza.\n";
    }
    void  bake() const
    {
        std::cout << "Baking the " << name() << " pizza.\n";
    }
    void  cut() const
    {
        std::cout << "Cutting the " << name() << " pizza.\n";
    }
    void  box() const
    {
        std::cout << "Boxing the " << name() << " pizza.\n";
    }
};

#endif // PIZZA_H
