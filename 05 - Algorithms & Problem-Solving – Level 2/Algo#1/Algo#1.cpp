#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintTableHeader()
{
    cout << "\t\t\tMultiplication Table From 1 to 10\n\n";
    cout << "\t  ";

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n\n-----------------------------------------------------------------------------------\n";
}

void PrintTable()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t| ";
        for (int j = 1; j <= 10; j++)
        {
            cout << j * i << "\t";
        }
        cout << endl;
    }
}

int main()
{
    PrintTableHeader();
    PrintTable();

    return 0;
}