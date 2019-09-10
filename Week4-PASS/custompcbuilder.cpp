#include "custompcbuilder.h"
#include "ram.h"

CustomPCBuilder::CustomPCBuilder()
{

}

void CustomPCBuilder::addCpu()
{
    _product = std::make_shared<CPU>(_product);
}

void CustomPCBuilder::addRAM()
{
    _product = std::make_shared<RAM>(_product);
}

std::shared_ptr<Computer> CustomPCBuilder::result()
{
    return _product;
}
