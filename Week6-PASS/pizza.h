#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>


class Pizza
{
public:
    Pizza();
    virtual ~Pizza();
    virtual std::string name();
    virtual int price();
    virtual std::string size();
};

#endif // PIZZA_H
