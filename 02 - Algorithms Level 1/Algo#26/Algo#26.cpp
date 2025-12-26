#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "Enter a number: "; cin >> N;

    return N;
}

void PrintNumbersUsingForLoop(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

void PrintNumbersUsingWhileLoop(int N)
{
    int i = 1;

    while (i <= N)
    {
        cout << i << endl;
        i++;
    }
}

int main()
{
    int N = ReadNumber();

    PrintNumbersUsingForLoop(N);
    PrintNumbersUsingWhileLoop(N);

    return 0;
}