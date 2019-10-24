#ifndef PIEFACTORY_H
#define PIEFACTORY_H
#include <memory>
#include "pie.h"

class PieFactory
{
public:
    PieFactory();
    virtual ~PieFactory() = default;

    virtual std::shared_ptr<Pie> MakePie() = 0;
};

#endif // PIEFACTORY_H
