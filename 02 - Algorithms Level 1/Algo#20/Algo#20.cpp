#include <iostream>
#include <cmath>
using namespace std;

float Area(float A)
{
    const float PI = 3.14;

    float Area = (PI * pow(A, 2)) / 4;

    return Area;
}

int main()
{
    unsigned int A;

    cout << "Enter the square side length: "; cin >> A;

    cout << "\nArea = " << ceil(Area(A)) << endl;

    return 0;
}