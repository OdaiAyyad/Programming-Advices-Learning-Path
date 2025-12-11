#include <iostream>
using namespace std;

int main()
{
    int a, b;
    const float PI = 3.14;

    cout << "Enter triangle side length: "; cin >> a;

    cout << "Area = " << (a * a) / (4 * PI) << endl;

    return 0;
}