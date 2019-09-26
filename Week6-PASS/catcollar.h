#ifndef COLLAR_H
#define COLLAR_H
#include <iostream>
#include "animalcollar.h"
#include "animal.h"

class CatCollar : public AnimalCollar
{
public:
    CatCollar();
    std::string name() override;
};

#endif // COLLAR_H
