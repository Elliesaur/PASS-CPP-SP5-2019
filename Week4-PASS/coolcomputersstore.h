#ifndef COOLCOMPUTERSSTORE_H
#define COOLCOMPUTERSSTORE_H
#include <iostream>
#include <memory>
#include "computer.h"

class CoolComputersStore
{
public:
    CoolComputersStore(const std::string storeName);
    std::shared_ptr<Computer> createOfficePC();
    std::shared_ptr<Computer> createCustomPC(int cpuCount, int ramCount);
    const std::string storeName();
private:
    const std::string _storeName;
};

#endif // COOLCOMPUTERSSTORE_H
