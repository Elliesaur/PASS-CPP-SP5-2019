#include <sstream>
#include "ram.h"

RAM::RAM(const std::shared_ptr<Computer> currentComputer)
    : Part{currentComputer}
{

}

std::string RAM::name() const
{
    std::stringstream ss{};
    ss << "Super " << _computer->name();
    ss << " Cool";

    return ss.str();
}

int RAM::price() const
{
    return 100 + _computer->price();
}

