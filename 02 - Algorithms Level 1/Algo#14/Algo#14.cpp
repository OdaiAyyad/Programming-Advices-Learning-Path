#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;

    cout << "Enter the first number: "; cin >> num1;
    cout << "Enter the second number: "; cin >> num2;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    temp = num2;
    num2 = num1;
    num1 = temp;

    cout << "\nAfter Swapping:\n";
    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    return 0;
}