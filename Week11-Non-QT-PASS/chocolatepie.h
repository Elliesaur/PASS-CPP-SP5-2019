#ifndef CHOCOLATEPIE_H
#define CHOCOLATEPIE_H
#include <iostream>
#include "pie.h"

class ChocolatePie : public Pie
{
public:
    ChocolatePie();
    std::string name() override;
};

#endif // CHOCOLATEPIE_H
