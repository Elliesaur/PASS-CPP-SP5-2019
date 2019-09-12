#ifndef CAT_H
#define CAT_H
#include "animal.h"

class Cat : public Animal
{
public:
    Cat(std::shared_ptr<AnimalCollar> collar);
};

#endif // CAT_H
