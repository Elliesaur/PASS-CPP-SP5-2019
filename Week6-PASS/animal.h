#ifndef ANIMAL_H
#define ANIMAL_H
// Include because of shared_ptr
#include <memory>
#include "animalcollar.h"

class Animal
{
public:
    Animal(std::shared_ptr<AnimalCollar> collar);

private:
    std::shared_ptr<AnimalCollar> _collar;
};

#endif // ANIMAL_H
