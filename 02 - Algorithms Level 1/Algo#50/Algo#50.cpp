#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadPIN(string& PIN)
{
    cout << "Enter your PIN: "; cin >> PIN;
}

int main()
{
    string PIN;
    short Balance = 7500;
    short Counter = 0;

    ReadPIN(PIN);

    if (PIN == "1234")
    {
        cout << "Your balance is: " << Balance << endl;
    }
    else
    {
        while (Counter != 3)
        {
            Counter++;
            cout << "Wrong PIN.\n";
            ReadPIN(PIN);
        }
        cout << "Card is locked!\n";
    }

    return 0;
}