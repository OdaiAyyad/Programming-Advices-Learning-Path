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
    for (int i = N; i > 1; i--)
    {
        cout << i << endl;
    }
    cout << endl;
}

void PrintNumbersUsingWhileLoop(int N)
{

}

void PrintNumbersUsingDoWhileLoop(int N)
{

}

int main()
{
    int N = ReadNumber();



    return 0;
}