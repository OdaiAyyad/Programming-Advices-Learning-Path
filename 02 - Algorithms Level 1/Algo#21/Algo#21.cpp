#include <iostream>
#include <cmath>
using namespace std;

float Area(float L)
{
    const float PI = 3.14;

    float Area = pow(L, 2) / (4 * PI);

    return Area;
}

int main()
{
    int L;

    cout << "Enter circle circumference: "; cin >> L;

    cout << "Area = " << floor(Area(L)) << endl;

    return 0;
}