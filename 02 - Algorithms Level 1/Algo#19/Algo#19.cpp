#include <iostream>
using namespace std;

float Area(float A, float D)
{
    float Area = A * (sqrt(pow(D, 2) - pow(A, 2)));

    return Area;
}

int main()
{
    const float PI = 3.14;
    unsigned int D;

    cout << "Enter the circle diameter: "; cin >> D;

    float Area = PI * pow(D, 2) / 4;
    cout << "\nArea = " << ceil(Area) << endl;

    return 0;
}