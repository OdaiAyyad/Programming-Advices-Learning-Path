#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPassword()
{
    string Password = "";

    cout << "Enter a 3-Letters Password (All Capital): "; cin >> Password;

    return Password;
}

bool PasswordSearch(string OriginalPassword)
{
    short Counter = 0; string Password = "";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                Counter++;

                Password = Password + char(i);
                Password = Password + char(j);
                Password = Password + char(k);

                cout << "Trial [" << Counter << "]: " << Password << endl;

                if (OriginalPassword == Password)
                {
                    cout << "\nPassword is " << Password << endl;
                    cout << "Found after " << Counter << " Trial(s).\n";

                    return true;
                }
                else
                    Password = "";
            }
        }
    }
    return false;
}

int main()
{
    PasswordSearch(ReadPassword());

    return 0;
}