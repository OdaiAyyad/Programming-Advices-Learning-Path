#include <iostream>
using namespace std;

int main()
{
    int LoanAmount, MonthlyPyment;

    cout << "Enter your loan amount: "; cin >> LoanAmount;
    cout << "Enter your monthly payment: "; cin >> MonthlyPyment;

    int Months = LoanAmount / MonthlyPyment;

    cout << "You need " << Months << " months, to settle this loan.\n";

    return 0;
}