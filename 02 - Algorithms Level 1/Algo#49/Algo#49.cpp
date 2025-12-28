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
    do
    {
        PINCode = ReadPINCode();
        if (PINCode == "1234")
            return 1;
        else
        {
            cout << "\nWrong PIN!\n";
            system("color 4F"); // Turn screen into red
        }
    } while (PINCode != "1234");

    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // Turn screen into green
        cout << "\nYour balance is: " << 7500 << endl;
    }

    return 0;
}