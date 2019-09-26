#ifndef TOPPING_H
#define TOPPING_H
#include "pizza.h"
#include <iostream>
#include <memory>

class Topping : public Pizza
{
public:
    Topping(std::shared_ptr<Pizza> pizza);
protected:
    std::shared_ptr<Pizza> _pizza;
};

#endif // TOPPING_H
