#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1;
    float num2 = 18.99;

    // num1 = num2; // Implicit conversion

    num1 = (int)num2; // Explicit Conversion

    // num1 = int(num2); // Explicit Conversion

    cout << num1 << endl;

    return 0;
}