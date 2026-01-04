#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadName()
{
    string Name = "";

    cout << "Enter your Name: "; cin >> Name;

    return Name;
}

string Encryption(string Name)
{
    for (int i = 0; i <= Name.length(); i++)
    {
        Name[i] += 2;
    }
    
    return Name;
}

string Decryption(string EncryptedName)
{
    for (int i = 0; i <= EncryptedName.length(); i++)
    {
        EncryptedName[i] -= 2;
    }

    return EncryptedName;
}

int main()
{
    string Name = ReadName();
    cout << "\nName Before Encryption: " << Name << endl;
    cout << "Name After Encryption: " << Encryption(Name) << endl;
    cout << "Name After Decryption: " << Decryption(Encryption(Name)) << endl;

    return 0;
}