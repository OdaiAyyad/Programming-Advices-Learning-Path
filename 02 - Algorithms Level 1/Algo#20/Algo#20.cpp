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

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    PrintArea(CalculateArea(ReadSquareSide()));
    
    return 0;
}