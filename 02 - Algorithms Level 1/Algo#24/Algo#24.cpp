#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Age;

    cout << "Enter your age: "; cin >> Age;

    if (Age >= 18 && Age < 45)
    {
        cout << "Valid Age!\n";
    }
    else
    {
        cout << "Invalid Age.\n";
    }

    return 0;
}