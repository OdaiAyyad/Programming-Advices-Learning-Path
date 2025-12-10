#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    unsigned int D;

    cout << "Enter the circle diameter: "; cin >> D;

    cout << "\nArea = " << (PI * D * D) / 4 << endl;

    return 0;
}