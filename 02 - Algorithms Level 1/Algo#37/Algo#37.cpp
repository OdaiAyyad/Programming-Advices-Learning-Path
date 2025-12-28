#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
    int N;
    cout << Message; cin >> N;

    return N;
}

float Summation()
{
    int N = 0;
    int Sum = 0;

    do
    {
        N = ReadNumber("Enter a number : ");
        if (N == -99)
            break;

        Sum += N;

    } while (N != -99);

    return Sum;
}

int main()
{
    cout << "\nSummation = " << Summation() << endl;

    return 0;
}