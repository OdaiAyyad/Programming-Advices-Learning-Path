#include <iostream>
#include <cmath>
using namespace std;

float Area(float R)
{
    const float PI = 3.14;
    float Area = PI * pow(R, 2);

    return Area;
}

int main()
{
    float R;

    cout << "Enter cicle radius: "; cin >> R;

    cout << "Area = " << ceil(Area(R)) << endl;

    return 0;
}