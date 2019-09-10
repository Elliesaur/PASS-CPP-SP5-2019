#ifndef CPU_H
#define CPU_H
#include <memory>
#include "part.h"

class Computer;

class CPU : public Part
{
public:
    CPU(const std::shared_ptr<Computer> currentComputer);
    int price() const override;
};

#endif // CPU_H
