#include <iostream>

#include "singletonclass.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    int x = SingletonClass::instance().add(1, 2);

    cout << x << endl;

    // auto cupOfCoffee = Soy(Decaf(Coffee("Black")))
    // cupOfCoffee.price();
    // super.price() + 0.5;
    // super.price() + 1;

    return 0;
}
