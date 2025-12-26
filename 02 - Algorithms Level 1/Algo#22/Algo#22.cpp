#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleDimensions(float& A, float& B)
{
    cout << "Enter triangle side length: "; cin >> A;
    cout << "Enter triangle base length: "; cin >> B;
}

float CalculateArea(float a, float b)
{
    const float PI = 3.14;

    float Area = (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

    return Area;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float A, B;

    ReadTriangleDimensions(A, B);
    PrintArea(CalculateArea(A, B));

    return 0;
}