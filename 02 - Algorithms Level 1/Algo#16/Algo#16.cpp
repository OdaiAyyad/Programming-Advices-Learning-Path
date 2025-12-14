#include <iostream>
#include <cmath>
using namespace std;

float Area(float A, float D)
{
    float Area = A * (sqrt(pow(D, 2) - pow(A, 2)));

    return Area;
}

int main()
{
    float D, A;

    cout << "Enter rectangle side length: "; cin >> A;
    cout << "Enter diognal length: "; cin >> D;

    cout << "Area = " << Area(A, D) << endl;

    return 0;
}