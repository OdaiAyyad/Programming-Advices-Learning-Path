#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float Area(float a, float b, float c)
{
    const float PI = 3.14;
    float P = (a + b + c) / 2;
    float T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
    float Area = PI * (T * T);

    return Area;
}

int main()
{
    float a, b, c;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;

    cout << "\nArea = " << Area(a, b, c) << endl;

    return 0;
}