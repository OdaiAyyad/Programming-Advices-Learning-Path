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

int main()
{
    string Name = ReadName();
    cout << "Name Before Encryption: " << Name << endl;
    cout << "Name After Encryption: " << Encryption(Name) << endl;

    return 0;
}