#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <memory>

class Prototype
{
public:
    Prototype();
    std::shared_ptr<Prototype> clone();
};

#endif // PROTOTYPE_H
