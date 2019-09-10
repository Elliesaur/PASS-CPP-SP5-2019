#include <iostream>
#include "coolcomputersstore.h"

using namespace std;

int main()
{
    CoolComputersStore store = CoolComputersStore{"Cool Computer Store!"};
    cout << store.storeName() << endl;

    auto officePC = store.createCustomPC(2, 1);
    cout << "We made a nice " << officePC->name() << " for you!" << endl;
    cout << "You need to pay us $" << officePC->price() << endl;

    // TODO: Finish the prototype and implement for parts
    //          along with creating a prototype manager
    // TODO: Consider refactoring builder

    return 0;
}
