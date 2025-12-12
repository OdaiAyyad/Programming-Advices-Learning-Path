#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int L;
    const float PI = 3.14;

    cout << "Enter circle circumference: "; cin >> L;

    float Area = pow(L, 2) / (4 * PI);
    cout << "Area = " << ceil(Area) << endl;

    return 0;
}