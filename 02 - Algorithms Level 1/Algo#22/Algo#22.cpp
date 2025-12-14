#include <iostream>
#include <cmath>
using namespace std;

float Area(float a, float b)
{
    const float PI = 3.14;

    float Area = (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

    return Area;
}

int main()
{
    float a, b;

    cout << "Enter triangle side length: "; cin >> a;
    cout << "Enter triangle base length: "; cin >> b;
 
    cout << "Area = " << floor(Area(a, b)) << endl;

    return 0;
}