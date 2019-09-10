#ifndef OFFICEPCBUILDER_H
#define OFFICEPCBUILDER_H
#include "computerbuilder.h"

class OfficePCBuilder : public ComputerBuilder
{
public:
    OfficePCBuilder();
    void addCpu() override;
    void addRAM() override;
    std::shared_ptr<Computer> result() override;
};

#endif // OFFICEPCBUILDER_H
