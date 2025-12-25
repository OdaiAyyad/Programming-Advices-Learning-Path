#include <iostream>
using namespace std;

void ReadDimension(float& A, float& B)
{
    cout << "Enter first line length: "; cin >> A;
    cout << "Enter second line length: "; cin >> B;
}

float CalculateArea(float A, float B)
{
    float Area = A * B;

    return Area;
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float A, B;

    ReadDimension(A, B);
    PrintArea(CalculateArea(A, B));

    return 0;
}