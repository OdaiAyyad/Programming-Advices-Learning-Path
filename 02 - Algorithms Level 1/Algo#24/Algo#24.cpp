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

bool CheckNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

void PrintResults(short Age)
{
    if (CheckNumberInRange(Age, 18, 45))
        cout << "\nValid Age!\n";
    else
        cout << "\nInvalid Age.\n";
}

int main()
{
    PrintResults(ReadAge());

    return 0;
}