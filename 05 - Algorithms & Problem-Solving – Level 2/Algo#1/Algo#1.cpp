#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintHeader()
{
    cout << "\t\t\tMultiplication Table From 1 to 10\n\n";
    cout << "\t  ";

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
}

int main()
{
    PrintHeader();
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t| ";
        for (int j = 1; j <= 10; j++)
        {
            cout << j * i << "\t";
        }
        cout << endl;
    }

    return 0;
}