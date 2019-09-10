#include "officepcbuilder.h"
#include "cpu.h"
#include "ram.h"

OfficePCBuilder::OfficePCBuilder()
{

}

void OfficePCBuilder::addCpu()
{
    for (int i{0}; i < 2; ++i) {
        _product = std::make_shared<CPU>(_product);
    }
}

void OfficePCBuilder::addRAM()
{
    for (int i{0}; i < 4; ++i) {
        _product = std::make_shared<RAM>(_product);
    }
}

std::shared_ptr<Computer> OfficePCBuilder::result()
{
    return _product;
}
