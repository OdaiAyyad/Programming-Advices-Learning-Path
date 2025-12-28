#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber(string Message)
{
    int N;
    cout << Message; cin >> N;

    return N;
}

int main()
{
    int Sum = 0;

    int N = ReadNumber("Enter a number : ");

    while (Num != -99)
    {
        cout << "Enter a number: "; cin >> Num;
        Sum += Num;
    }
    cout << "\nSummation = " << Sum << endl

    return 0;
}