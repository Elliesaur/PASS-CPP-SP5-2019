#include <iostream>
#include "templatepiefactory.h"
#include "chocolatepie.h"
#include "vector.h"
using namespace std;
int main()
{
    TemplatePieFactory<TemplatePieFactory<ChocolatePie>> factory{};

    auto pie{factory.MakePie()};

    cout << "Factory made a " << pie->MakePie()->name() << endl;


    Vector<int> vector1{1, 1, 1};
    Vector<float> vector2{1.1, 1.1, 1.1};
    Vector<double> vector3{1.11, 1.11, 1.11};


    Vector<int> vector4 = vector2.Add(<int, double>(vector3);

    cout << vector4.x() << endl;

    return 0;
}
