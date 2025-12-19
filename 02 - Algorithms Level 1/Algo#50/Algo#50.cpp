#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string PIN;  int Balance = 7500; int Counter = 0;

    cout << "Enter your PIN: "; cin >> PIN;

    while (PIN != "1234")
    {
        cout << "\nWrong PIN!\n";
        cout << "Enter your PIN: "; cin >> PIN;
        Counter++;
        if (Counter == 3)
        {
            cout << "Card is locked!\n";
        }
    }

    return 0;
}