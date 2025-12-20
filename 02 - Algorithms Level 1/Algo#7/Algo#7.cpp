#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int Num;
    cout << "Enter a Number: "; cin >> Num;

    return Num;
}

float CalculateHalf(int Num)
{
    return float(Num / 2);
}

void PrintHalf(int Num)
{
    cout << "\nHalf of " + to_string(Num) + " is " + to_string(CalculateHalf(Num)) << endl;
}

int main()
{
    PrintHalf(ReadNumber());

    return 0;
}