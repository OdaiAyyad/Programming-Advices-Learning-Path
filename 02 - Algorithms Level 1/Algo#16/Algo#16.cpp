#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float D, A;

    cout << "Enter rectangle side length: "; cin >> A;
    cout << "Enter diognal length: "; cin >> D;

    cout << "Area = " << A * (sqrt(pow(D, 2) - pow(A, 2))) << endl;

    return 0;
}