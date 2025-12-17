#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadPIN(string &PIN)
{
    cout << "Enter your PIN: "; cin >> PIN;
}

int main()
{
    string PIN;
    short Balance = 7500;

    ReadPIN(PIN);

    if (PIN == "1234")
    {
        cout << "Your balance is: " << Balance << endl;
    }
    else
    {
        cout << "Wrong PIN.\n";
    }

    return 0;
}