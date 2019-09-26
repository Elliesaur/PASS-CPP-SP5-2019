#include "pizza.h"

Pizza::Pizza()
{

}

Pizza::~Pizza(){


}

std::string Pizza::name()
{
    return std::string{"Pizza"};
}

int Pizza::price()
{
    return 10;
}

std::string Pizza::size()
{
    return std::string{"Medium"};
}
