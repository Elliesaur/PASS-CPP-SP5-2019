#include "add.h"

Add::Add(int baseNum)
    : _baseNum{baseNum}
{

}

int Add::operator()(int a, int b)
{
    return _baseNum + a + b;
}
