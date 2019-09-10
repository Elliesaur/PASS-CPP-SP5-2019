#include "computer.h"

Computer::Computer()
    : _name{"Cool Computer"}
{

}

Computer::~Computer()
{

}

std::string Computer::name() const
{
    return _name;
}

int Computer::price() const
{
    return 50;
}
