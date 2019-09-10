#include "computerbuilder.h"

ComputerBuilder::ComputerBuilder()
    : _product{std::make_shared<Computer>()}
{

}

ComputerBuilder::~ComputerBuilder()
{

}
