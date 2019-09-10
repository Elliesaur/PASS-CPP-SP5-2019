#include <iostream>
#include <vector>
#include <array>
#include <memory>

void output1()
{
    std::string hello{"Hi there"};
    std::cout << hello << std::endl;
    std::cout << &hello << std::endl;
    auto hey{&hello};
    (*hey).insert(0, "Hey ");

    std::cout << hey << std::endl;
    std::cout << *hey << std::endl;
    std::cout << hello << std::endl;
}

void output2()
{
    std::array<int, 3> arr{1, 2, 3};

    for (int i{0};i<int(sizeof(arr))/sizeof(arr[0]);++i)
{
   std::cout << arr[i] << std::endl;
}

    for (int i{0}; i < arr.size(); ++i) {
        std::cout << arr[i] << std::endl;
    }


    for (int i : arr) {
        std::cout << i << std::endl;
    }

    std::vector<std::string> strVector{};
    strVector.push_back("Test");
    strVector.push_back("Test2");
    strVector.insert(strVector.begin() + 1, "Test3");

    for (const std::string a : strVector) {

    }

    int x[5] = {50, 100, 150, 200, 250};

    // When we dereference x, what value would this be for a C-style array?
    std::cout << *x << std::endl;

    ++(*x);
    *(x + 2) = 1000;

    // What even???
    for (int i{0}; i < int(sizeof(x) / sizeof(x[0])); ++i)
    {
        std::cout << x[i] << std::endl;
    }

    // What would be the better way to avoid dealing with C-style arrays?
}


int main()
{
    // What is the difference between a pointer and a reference?
    int *p{nullptr};
    // Why do we use pointers?

    // What are the two types of main storage you'll be using in C++?

    // What is the function of each of the storage methods?

    // How do we get the address of a local variable?

    // What would be the best way to use pointers in modern C++?

    // What is dereferencing and why do we need to dereference?

    // What is the 'arrow operator' and how does it relate to pointers and complex types?

    int count{100};
    int count2{500};

    std::cout << count << std::endl;

    // How do we get the address?
    int *pointerToCount{&count};
    std::cout << pointerToCount << std::endl;
    std::cout << *pointerToCount << std::endl;

    // How do we get the address?
    int *pointerToCount2{&count2};
    int diff = int(pointerToCount2 - pointerToCount);
    std::cout << diff << std::endl;

    // What is this doing?
    int *whatAmI = pointerToCount + diff;
    std::cout << whatAmI << std::endl;
    std::cout << *whatAmI << std::endl;

    std::cout << "----------" << std::endl;
    //output1();
    std::cout << "----------" << std::endl;
    output2();
    std::cout << "----------" << std::endl;
    return 0;
}
