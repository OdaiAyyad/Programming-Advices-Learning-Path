#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    unsigned int A;

    cout << "Enter the square side length: "; cin >> A;

    cout << "\nArea = " << (PI*A*A)/4 << endl;

    return 0;
}