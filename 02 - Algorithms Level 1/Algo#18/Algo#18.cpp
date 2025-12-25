#include <iostream>
#include <cmath>
using namespace std;

float ReadRadius()
{
    float R;
    cout << "Enter cicle radius: "; cin >> R;

    return R;
}

float CalculateArea(float R)
{
    const float PI = 3.14;
    float Area = PI * pow(R, 2);

    return Area;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << ceil(Area) << endl;
}

int main()
{
    PrintArea(CalculateArea(ReadRadius()));

    return 0;
}