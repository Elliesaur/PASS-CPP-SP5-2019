#ifndef PINEAPPLE_H
#define PINEAPPLE_H
#include "topping.h"
#include <memory>

class Pineapple : public Topping
{
public:
    Pineapple(std::shared_ptr<Pizza> pizza);
    std::string name() override;
    int price() override;
};

#endif // PINEAPPLE_H
