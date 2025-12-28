#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPINCode()
{
    string PINCode;
    cout << "Enter your PIN code: "; cin >> PINCode;

    return PINCode;
}

bool Login()
{
    string PINCode;
    short Counter = 3;
    do
    {
        Counter--;
        PINCode = ReadPINCode();
        if (PINCode == "1234")
            return 1;
        else
        {
            system("color 4F"); // Turn screen into red
            cout << "\nWrong PIN!\nYou have " << Counter << " more tries.\n";
        }
    } while (Counter >= 1 && PINCode != "1234");

    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // Turn screen into green
        cout << "\nYour balance is: " << 7500 << endl;
    }
    else
    {
        cout << "Card is locked!\nCall the bank for help.";
    }

    return 0;
}