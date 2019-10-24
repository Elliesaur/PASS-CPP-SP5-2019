#include "chocolatepiefactory.h"


ChocolatePieFactory::ChocolatePieFactory()
{

}

std::shared_ptr<Pie> ChocolatePieFactory::MakePie()
{
    std::shared_ptr<Pie> pie = std::make_shared<ChocolatePie>();
    return pie;
}
