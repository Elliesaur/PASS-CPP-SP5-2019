#ifndef CHOCOLATEPIEFACTORY_H
#define CHOCOLATEPIEFACTORY_H
#include <memory>
#include "piefactory.h"
#include "chocolatepie.h"

class ChocolatePieFactory : public PieFactory
{
public:
    ChocolatePieFactory();
    std::shared_ptr<Pie> MakePie() override;
};

#endif // CHOCOLATEPIEFACTORY_H
