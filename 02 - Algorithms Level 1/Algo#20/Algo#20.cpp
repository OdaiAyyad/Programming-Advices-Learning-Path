#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    unsigned int A;

    cout << "Enter the square side length: "; cin >> A;

    float Area = PI * pow(A, 2) / 4;
    cout << "\nArea = " << ceil(Area) << endl;

    return 0;
}