#include <iostream>
using namespace std;

int main()
{
    int LoanAmount, Months;

    cout << "Enter your loan amount: "; cin >> LoanAmount;
    cout << "How many months you need to settle this loan? "; cin >> Months;

    int MonthlyPyment = LoanAmount / Months;

    cout << "\nYour monthly payment will be " << MonthlyPyment << endl;

    return 0;
}