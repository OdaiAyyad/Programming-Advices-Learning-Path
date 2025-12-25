#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide()
{
    float A;
    cout << "Enter the square side length: "; cin >> A;

    return A;
}

float CalculateArea(float A)
{
    const float PI = 3.14;

    float Area = (PI * pow(A, 2)) / 4;

    return Area;
}

int main()
{


    cout << "\nArea = " << Area(A) << endl;

    return 0;
}