#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    float R;

    cout << "Enter cicle radius: "; cin >> R;

    float Area = PI * pow(R, 2);
    cout << "Area = " << ceil(Area) << endl;

    return 0;
}