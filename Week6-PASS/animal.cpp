#include "animal.h"

Animal::Animal(std::shared_ptr<AnimalCollar> collar)
    : _collar{collar}
{

}
