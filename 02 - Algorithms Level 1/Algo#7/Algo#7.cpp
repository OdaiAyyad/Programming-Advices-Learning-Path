#include <iostream>
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
    cout << "Half of " << Num << " is " << CalculateHalf(Num) << endl;
}

int main()
{
    PrintHalf(ReadNumber());

    return 0;
}