#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int N;
    do
    {
        cout << Message; cin >> N;

    } while (N < 0);

    return N;
}

int FactorialUsingForLoop(short N)
{
    short Fact = 1;

    cout << "\nFactorial of " << N << " using For loop = ";
    for (int i = N; i >= 1; i--)
    {
        Fact *= i;
    }
    return Fact;
}

int FactorialUsingWhileLoop(short N)
{
    short Fact = 1;
    int i = N;

    cout << "\nFactorial of " << N << " using While loop = ";
    while (i > 1)
    {
        Fact *= i;
        i--;
    }
    return Fact;
}

int FactorialUsingDoWhileLoop(short N)
{
    short Fact = 1;
    int i = N;

    cout << "\nFactorial of " << N << " using Do While loop = ";
    do
    {
        Fact *= i;
        i--;
    } while (i > 1);

    return Fact;
}

int main()
{
    int N = ReadPositiveNumber("Enter a positive number: ");

    cout << FactorialUsingForLoop(N) << endl;
    cout << FactorialUsingWhileLoop(N) << endl;
    cout << FactorialUsingDoWhileLoop(N) << endl;

    return 0;
}