#include <iostream>
#include <cmath>
using namespace std;

void ReadDimensions(float& A, float& D)
{
    cout << "Enter rectangle side length: "; cin >> A;
    cout << "Enter diognal length: "; cin >> D;
}

float CalculateArea(float A, float D)
{
    float Area = A * (sqrt(pow(D, 2) - pow(A, 2)));

    return Area;
}

void PrintArea(float Area)
{
    cout << "Area = " << Area << endl;
}

int main()
{
    float A, D;

    ReadDimensions(A, D);
    PrintArea(CalculateArea(A, D));

    return 0;
}