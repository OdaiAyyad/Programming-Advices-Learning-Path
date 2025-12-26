#include <iostream>
#include <cmath>
using namespace std;

float ReadCircleCircumference()
{
    float L;
    cout << "Enter circle circumference: "; cin >> L;

    return L;
}

float CalculateArea(float L)
{
    const float PI = 3.14;

    float Area = pow(L, 2) / (4 * PI);

    return Area;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintArea(CalculateArea(ReadCircleCircumference()));

    return 0;
}