#include <iostream>
#include <cmath>
using namespace std;

float ReadCircleCircumference()
{
    float L;
    cout << "Enter circle circumference: "; cin >> L;

    return L;
}

float Area(float L)
{
    const float PI = 3.14;

    float Area = pow(L, 2) / (4 * PI);

    return Area;
}

int main()
{


    cout << "Area = " << floor(Area(L)) << endl;

    return 0;
}