#include <iostream>
#include <string>
#include <cmath>
using namespace std;

short ReadAge()
{
    short Age;
    cout << "Enter your age: "; cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= 18 && Number <= 45);
}

int ReadUntilAgeBetween(int From, int To)
{
    while (!(ValidateNumberInRange(ReadAge(), From, To)))
    {
        cout << "Invalid Age!";
        ReadAge();
    }
}

void PrintResults(short Age)
{
    if()
}

int main()
{


    return 0;
}