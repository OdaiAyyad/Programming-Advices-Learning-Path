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

void PrintFullName(stFullName Name)
{
    cout << "\nFull Name: " << Name.FisrtName << " " << Name.LastName << "\n\n";
}

int main()
{
    PrintFullName(ReadFullName());

    return 0;
}