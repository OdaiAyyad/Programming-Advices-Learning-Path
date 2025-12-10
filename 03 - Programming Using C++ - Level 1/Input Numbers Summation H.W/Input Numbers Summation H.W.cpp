#include <iostream>
using namespace std;

int main()
{
    int Num1, Num2, Num3;

    cout << "Enter Number1: "; cin >> Num1;
    cout << "Enter Number2: "; cin >> Num2;
    cout << "Enter Number3: "; cin >> Num3;

    cout << endl;

    cout << Num1 << " +\n" << Num2 << " +\n" << Num3;
    cout << "\n___________________________________\n";
    cout << "Total = " << Num1 + Num2 + Num3 << endl;

    return 0;
}