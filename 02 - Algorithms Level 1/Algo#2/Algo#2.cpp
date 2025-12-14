#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintName(string Name)
{
    cout << Name << endl;
}

int main()
{
    string Name;

    cout << "Enter your name: "; cin >> Name;

    PrintName(Name);

    return 0;
}