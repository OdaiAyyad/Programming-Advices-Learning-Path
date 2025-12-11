#include <iostream>
using namespace std;

int main()
{
    int a, b;
    const float PI = 3.14;

    cout << "Enter triangle side length: "; cin >> a;
    cout << "Enter triangle base length: "; cin >> b;
    float A = PI * ((b * b) / 4) * ((2 * a - b) / (2 * a + b));
    cout << "Area = " << A << endl;

    return 0;
}