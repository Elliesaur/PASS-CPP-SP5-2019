#ifndef PART_H
#define PART_H
#include <memory>
#include "computer.h"

class Part : public Computer
{
public:
    Part(const std::shared_ptr<Computer> currentComputer);
protected:
    std::shared_ptr<Computer> _computer;
};

#endif // PART_H
