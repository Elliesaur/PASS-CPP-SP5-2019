#ifndef COMPUTERBUILDER_H
#define COMPUTERBUILDER_H

#include <memory>
#include "computer.h"


class ComputerBuilder
{
public:
    ComputerBuilder();
    virtual ~ComputerBuilder();
    virtual void addCpu() = 0;
    virtual std::shared_ptr<Computer> result() = 0;
    virtual void addRAM() = 0;
protected:
    std::shared_ptr<Computer> _product;
};

#endif // COMPUTERBUILDER_H
