#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b;
    const float PI = 3.14;

    cout << "Enter triangle side length: "; cin >> a;
    cout << "Enter triangle base length: "; cin >> b;
 
    float Area = (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    cout << "Area = " << floor(Area) << endl;

    return 0;
}