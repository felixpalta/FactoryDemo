#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
#include <forward_list>

class Pizza
{
private:
    virtual std::string name() const = 0;
    virtual std::string dough() const = 0;
    virtual std::string sauce() const = 0;
protected:
    std::forward_list<std::string> toppings;

protected:
    Pizza()
        : toppings() {}
public:
    virtual ~Pizza() = default;

public:
    virtual void prepare() const
    {
        std::cout   << "Making the " << name() << '\n'
                    << "Tossing dough: " << dough() << '\n'
                    << "Adding sauce: " << sauce() << '\n'
                    << "Adding toppings: " << std::endl;
        if (toppings.empty())
            std::cout << "None." << std::endl;
        else
            for (auto& s : toppings)
                std::cout << "\t" << s << std::endl;
    }

    virtual void bake() const
    {
        std::cout << "Baking the " << name() << " pizza for 25 minutes at 350.\n";
    }
    virtual void cut() const
    {
        std::cout << "Cutting the " << name() << " pizza in DIAGONAL slices.\n";
    }
    virtual void  box() const
    {
        std::cout << "Place the " << name() << " pizza in official PizzaStore box.\n";
    }
};

#endif // PIZZA_H
