#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    unsigned int D;

    cout << "Enter the circle diameter: "; cin >> D;

    float Area = PI * pow(D, 2) / 4;
    cout << "\nArea = " << ceil(Area) << endl;

    return 0;
}