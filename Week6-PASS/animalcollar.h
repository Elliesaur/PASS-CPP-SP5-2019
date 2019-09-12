#ifndef COLLARBASE_H
#define COLLARBASE_H
#include <iostream>

class AnimalCollar
{
public:
    AnimalCollar();
    virtual ~AnimalCollar();
    virtual std::string name()/* = 0 */;
};

#endif // COLLARBASE_H
