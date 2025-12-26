#include <iostream>
#include <string>
#include <cmath>
using namespace std;

short ReadAge()
{
    short Age;
    cout << "Enter age between 18 and 45: "; cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= 18 && Number <= 45);
}

int ReadUntilAgeBetween(int From, int To)
{
    short Age = 0;

    do
    {
        Age = ReadAge();

    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
}

void PrintResults(short Age)
{
    cout << "\nYour age is: " << Age << endl;
}

int main()
{
    PrintResults(ReadUntilAgeBetween(18, 45));

    return 0;
}