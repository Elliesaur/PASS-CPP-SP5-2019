#include "divide.h"

Divide::Divide(int baseNum)
    : _baseNum{baseNum}
{

}

int Divide::operator()(int a, int b)
{
    return _baseNum + (a / (b == 0 ? 1 : b));
}
