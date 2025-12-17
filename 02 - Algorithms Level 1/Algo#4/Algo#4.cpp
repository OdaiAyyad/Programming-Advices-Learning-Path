#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    short Age;
    bool HasDriverLicense;

    cout << "Enter your age: "; cin >> Age;
    cout << "Do you have a driver license? "; cin >> HasDriverLicense;

    if (Age > 21 && HasDriverLicense == true)
    {
        cout << "Hired!\n";
    }
    else
    {
        cout << "Rejected!\n";
    }

    return 0;
}