#include <iostream>
using namespace std;

float ReadDiameter()
{
    float D;
    cout << "Enter the circle diameter: "; cin >> D;

    return D;
}

float CalculateArea(float D)
{
    const float PI = 3.14;
    float Area = PI * pow(D, 2) / 4;

    return Area;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << ceil(Area) << endl;
}

int main()
{
    PrintArea(CalculateArea(ReadDiameter()));

    return 0;
}