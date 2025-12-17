#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // IF Statement
    int x = 10;

    if (x >= 5 && x <= 20)
    {
        cout << "The code of IF body has executed.\n";
    }
    cout << "The code after IF body always executed.\n\n";

    // IF-Else Statement
    int z;

    cout << "Enter your number: "; cin >> z;

    if (z > 5)
    {
        cout << "Yes, z is greater than 5!\n";
    }
    else
    {
        cout << "No, z is less that 5.\n";
    }

    return 0;
}