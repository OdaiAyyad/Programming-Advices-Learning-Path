#include <iostream>
using namespace std;

float Area(float A, float B)
{
    float Area = A * B;

    return Area;
}

int main()
{
    float A, B;

    cout << "Enter first line length: "; cin >> A;
    cout << "Enter second line length: "; cin >> B;

    cout << "\nArea = " << Area(A, B) << endl;

    return 0;
}