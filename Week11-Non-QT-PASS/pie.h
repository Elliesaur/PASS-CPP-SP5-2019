#ifndef PIE_H
#define PIE_H
#include <iostream>

class Pie
{
public:
    Pie();
    virtual ~Pie() = default;

    virtual std::string name() = 0;
};

#endif // PIE_H
