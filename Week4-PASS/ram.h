#ifndef RAM_H
#define RAM_H
#include "part.h"

class RAM : public Part
{
public:
    RAM(const std::shared_ptr<Computer> currentComputer);
    std::string name() const override;
    int price() const override;
};

#endif // RAM_H
