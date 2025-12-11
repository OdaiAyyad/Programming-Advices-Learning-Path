#include <iostream>
using namespace std;

int main()
{
    float a, b;
    const float PI = 3.14;

    cout << "Enter triangle side length: "; cin >> a;
    cout << "Enter triangle base length: "; cin >> b;
 
    cout << "Area = " << (PI * b * b / 4) * ((2 * a - b) / (2 * a + b)) << endl;

    return 0;
}