#include "singletonclass.h"

SingletonClass &SingletonClass::instance()
{
    static SingletonClass something{};
    return something;
}

int SingletonClass::add(int a, int b)
{
    return a + b;
}

SingletonClass::SingletonClass()
{

}
