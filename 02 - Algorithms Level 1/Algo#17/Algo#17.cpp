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



int main()
{
    float A, H;

    ReadDimensions(A, H);

    cout << "\nArea = " << 0.5*(a * b) << endl;

    return 0;
}