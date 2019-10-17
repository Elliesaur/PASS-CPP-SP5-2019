#include <iostream>
#include <memory>
#include "calculator.h"
#include "add.h"
#include "divide.h"
#include "animalcollar.h"
#include "catcollar.h"
#include "pizza.h"
#include "topping.h"
#include "cheese.h"
#include "pineapple.h"

using namespace std;

class Foo {
public:
    Foo() {

    }
protected:
    int _a;
    int _b;
    int _c;
};
class Bar {
public:
    Bar() {

    }
protected:
    int _d;
    int _e;
};

class FooBar : public Foo, public Bar {
public:
    FooBar() : Foo{}, Bar{} {

    }
    void Something() {

        [&]() {
          _a = 2;
          _b = 3;
          _c = 4;
          _d = 5;
          _e = 6;
        }();

        auto lambda = [&]() {
          _a = 2;
          _b = 3;
          _c = 4;
          _d = 5;
          _e = 6;
        };

        lambda();
        lambda();
        lambda();
    }
};

void something(int a) {
    cout << "No" << endl;
}

void something2(int a) {
    cout << "Hi" << endl;
}

int main()
{

    auto somethingPtr = &something;

    somethingPtr(1);

    somethingPtr = &something2;

    somethingPtr(2);

    int a = 1;
    int b = 2;

    auto lambda = [&]() {
      cout << "Hi" << endl;
      cout << a + b << endl;
      a = a + b;
    };

    lambda();
    lambda();

    cout << a << endl;
    cout << b << endl;

    return 0;
    // Make a cat collar and store it as an animal collar
    AnimalCollar collar = CatCollar{};
    // This would still be treated as the collar base.
    //cout << collar.name() << endl;

    AnimalCollar *collarPtrX{};

    std::shared_ptr<AnimalCollar> collarX{};
    //collarX->name();


    // Make a cat collar and store it as an animal collar
    std::shared_ptr<AnimalCollar> collarBaseNew = std::make_shared<CatCollar>();
    // This would be treated as the child class.
    cout << collarBaseNew->name() << endl;

    // if (collarBaseNew instanceof CatCollar)
    //     CatCollar actualCollar = (CatCollar)collarBaseNew;
    //
    auto actualCollar = std::dynamic_pointer_cast<CatCollar>(collarBaseNew);
    if (actualCollar != nullptr) {
        // This is a cat collar, the cast succeeded.
    } else {
        // This is not a cat collar, the cast failed.
    }

    // Using bare pointers, same thing
    AnimalCollar *barePtr = new CatCollar{};
    // Treated as the child
    cout << barePtr->name() << endl;

    auto actualBarePtrCollar = dynamic_cast<CatCollar *>(barePtr);
    if (actualBarePtrCollar != nullptr) {
        // This is a cat collar, cast succeeded.
    } else {
        // This is not a cat collar.
    }

    barePtr = nullptr;
    delete barePtr;


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


    // Create a calculator that uses functors'
    //   and a template for calling the functors
    // There should be add, divide, subtract and multiply,
    //   each should have a base number that is added to any result.
    // Each operation is a separate class
    // The calculator should have a single method that takes in an instance of
    //   the functor and the two integers along with the return type.
    //
    // You must not use inheritence for operation classes.
    // The calculate function should be a template function.

    Calculator calc{};
    Add add{5};

    // This is the same as doing add.operator()(1, 3);
    // Strange, right?
    int resultAdd = add(1, 3);

    // Pass in the type of operation (Add), the result (int) and the
    // functor (add) and the numbers to add.
    int result = calc.calculate<Add, int>(add, 1, 2);

    cout << result << endl;

    cout << "Pizza time!" << endl;

    shared_ptr<Pizza> thePizza {std::make_shared<Pizza>()};

    shared_ptr<Cheese> cheese {std::make_shared<Cheese>(thePizza)};
    shared_ptr<Pineapple> cheese_and_pineapple {std::make_shared<Pineapple>(cheese)};

    cout << cheese_and_pineapple->name() << endl;


    return 0;
}
