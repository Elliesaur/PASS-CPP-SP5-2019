#ifndef CUSTOMPCBUILDER_H
#define CUSTOMPCBUILDER_H

#include "computerbuilder.h"
#include "cpu.h"
class CustomPCBuilder : public ComputerBuilder
{
public:
    CustomPCBuilder();
    void addCpu() override;
    void addRAM() override;
    std::shared_ptr<Computer> result() override;
};

#endif // CUSTOMPCBUILDER_H
