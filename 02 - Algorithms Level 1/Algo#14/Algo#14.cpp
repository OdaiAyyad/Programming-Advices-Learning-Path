#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2)
{
    cout << "Enter the first number: "; cin >> num1;
    cout << "Enter the second number: "; cin >> num2;
}

void Swap(int &num1, int &num2)
{
    int temp;

    temp = num2;
    num2 = num1;
    num1 = temp;
}

void PrintNumbers(int num1, int num2)
{
    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;
}

int main()
{
    int num1, num2;

    ReadNumbers(num1, num2);
    cout << "\nNumbers Before Swapping:\n";
    PrintNumbers(num1, num2);


    cout << "\nNumbers After Swapping:\n";
    Swap(num1, num2);
    PrintNumbers(num1, num2);

    return 0;
}