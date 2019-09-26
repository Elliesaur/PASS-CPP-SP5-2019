#include "cheese.h"


Cheese::Cheese(std::shared_ptr<Pizza> pizza)
    : Topping{pizza}
{

}

std::string Cheese::name()
{
    return "The " + _pizza->name() + " with Cheese";
}

int Cheese::price()
{
    return _pizza->price() + 1;
}

std::string Cheese::size()
{
    return std::string{"Extra Large"};
}
