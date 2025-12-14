#include <iostream>
using namespace std;

float Area(float D)
{
    const float PI = 3.14;
    float Area = PI * pow(D, 2) / 4;

    return Area;
}

int main()
{
    unsigned int D;

    cout << "Enter the circle diameter: "; cin >> D;

    cout << "\nArea = " << ceil(Area(D)) << endl;

    return 0;
}