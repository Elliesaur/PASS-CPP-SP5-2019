#ifndef CHEESE_H
#define CHEESE_H
#include "topping.h"
#include <memory>

class Cheese : public Topping
{
public:
    Cheese(std::shared_ptr<Pizza> pizza);
    std::string name() override;
    int price() override;
    std::string size() override;
};

#endif // CHEESE_H
