#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Square Root (sqrt)
    cout << "Square root value of 64 = " << sqrt(64) << endl;
    cout << "Square root value of 50 = " << sqrt(50) << endl << endl;

    // Round
    cout << "Round(2.4) = " << round(2.4) << endl;
    cout << "Round(2.5) = " << round(2.5) << endl;
    cout << "Round(2.7) = " << round(2.7) << endl;

    cout << "Round of square root value of 50 = " << round(sqrt(50)) << "\n\n";

    // Power (pow)
    cout << "2 ^ 4 = " << pow(2, 4) << endl;
    cout << "4 ^ 3 = " << pow(4, 3) << "\n\n";

    // Ceil & Floor (Ceil --> Top), (Floor --> Bottom)
    cout << "Ceil(2.9) = " << ceil(2.9) << endl;
    cout << "Floor(2.9) = " << floor(2.9) << endl;

    cout << "Ceil(-2.9) = " << ceil(-2.9) << endl;
    cout << "Floor(-2.9) = " << floor(-2.9) << "\n\n";



    return 0;
}