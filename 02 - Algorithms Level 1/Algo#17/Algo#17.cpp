#include <iostream>
using namespace std;

void ReadDimensions(float& A, float& H)
{
    cout << "Enter the base length: "; cin >> A;
    cout << "Enter the height: "; cin >> H;

}

float CalculateArea(float A, float H)
{
    return float(0.5 * (A * H));
}

void PrintArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}

int main()
{
    float A, H;

    ReadDimensions(A, H);
    PrintArea(CalculateArea(A, H));

    return 0;
}