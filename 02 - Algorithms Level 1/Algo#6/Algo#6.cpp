#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stFullName
{
    string FisrtName, LastName;
};

stFullName ReadFullName()
{
    stFullName Name;

    cout << "Enter your first name: "; cin >> Name.FisrtName;
    cout << "Enter your last name: "; cin >> Name.LastName;

    return Name;
}

string GetFullName(stFullName Name)
{
    string FullName = "";

    FullName = Name.FisrtName + " " + Name.LastName;

    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "\nFull Name: " << FullName << "\n\n";
}

int main()
{
    PrintFullName(GetFullName(ReadFullName()));

    return 0;
}