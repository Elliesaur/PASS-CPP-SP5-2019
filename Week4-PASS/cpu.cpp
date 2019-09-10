#include <sstream>
#include "cpu.h"

CPU::CPU(const std::shared_ptr<Computer> currentComputer)
    : Part{currentComputer}
{
    std::stringstream ss{};
    ss << "Cool CPU " << currentComputer->name();
    _name = ss.str();
    ss.str(std::string{});
}

int CPU::price() const
{
    return _computer->price() + 200;
}
