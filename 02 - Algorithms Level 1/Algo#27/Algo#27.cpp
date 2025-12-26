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
    for (int i = N; i >= 1; i--)
    {
        cout << i << endl;
    }
    cout << endl;
}

void PrintNumbersUsingWhileLoop(int N)
{
    int counter = N + 1;

    while (counter >= 1)
    {
        counter--;
        cout << counter << endl;
    }
    cout << endl;
}

void PrintNumbersUsingDoWhileLoop(int N)
{
    int counter = N + 1;

    do
    {
        counter--;
        cout << counter << endl;

    } while (counter > 1);
    cout << endl;
}

int main()
{
    int N = ReadNumber();

    PrintNumbersUsingForLoop(N);
    PrintNumbersUsingWhileLoop(N);
    PrintNumbersUsingDoWhileLoop(N);

    return 0;
}