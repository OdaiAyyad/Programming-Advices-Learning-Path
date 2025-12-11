#include <iostream>
using namespace std;

int main()
{
    int L;
    const float PI = 3.14;

    cout << "Enter circle circumference: "; cin >> L;

    cout << "Area = " << (L * L) / (4 * PI) << endl;

    return 0;
}