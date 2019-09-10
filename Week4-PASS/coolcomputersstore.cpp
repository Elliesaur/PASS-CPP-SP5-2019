#include "coolcomputersstore.h"
#include "custompcbuilder.h"
#include "officepcbuilder.h"

CoolComputersStore::CoolComputersStore(const std::string storeName)
    : _storeName{storeName}
{

}

std::shared_ptr<Computer> CoolComputersStore::createOfficePC()
{
    auto builder{std::make_shared<OfficePCBuilder>()};
    builder->addCpu();
    builder->addRAM();
    return builder->result();
}

std::shared_ptr<Computer> CoolComputersStore::createCustomPC(int cpuCount, int ramCount)
{
    std::shared_ptr<CustomPCBuilder> builder{std::make_shared<CustomPCBuilder>()};
    for (int i{0}; i < cpuCount; ++i) {
        builder->addCpu();
    }
    for (int i{0}; i < ramCount; ++i) {
        builder->addRAM();
    }
    return builder->result();
}


const std::string CoolComputersStore::storeName()
{
    return _storeName;
}
