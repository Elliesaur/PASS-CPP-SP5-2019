#include "pineapple.h"

Pineapple::Pineapple(std::shared_ptr<Pizza> _pizza)
    : Topping{_pizza}
{

}

std::string Pineapple::name()
{
    return "Yeet " + _pizza->name() + " with pineapple skeet";
}

int Pineapple::price()
{
    return _pizza->price() + 3;
}

