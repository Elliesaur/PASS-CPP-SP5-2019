#include <iostream>
#include "calculator.h"
#include "add.h"
#include "divide.h"

using namespace std;

int main()
{
    // Pointers/Smart Pointers
    /// - A crucial concept
    // Iterators/Containers
    /// - How do we use iterators to navigate through a container?
    // Templates
    /// - When to use
    /// - Specialisation
    // Function Pointers
    /// - Why even??
    /// - Is there not an easier way?
    // Functors
    /// - Whats the difference?
    /// - Operator overriding
    // Lambdas
    /// - Complex but cool
    // STL Algorithms
    /// - You can google this in your own time


    Calculator calc{};
    Add add{5};

    auto result = calc.calculate<Add, int>(add, 1, 2);
    cout << result << endl;

    return 0;
}
