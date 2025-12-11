#include <iostream>
using namespace std;

int main()
{
    float TotalBill, CashPaid, Remainder;

    cout << "Enter your total bill: "; cin >> TotalBill;
    cout << "Enter the paid cash: "; cin >> CashPaid;

    Remainder = CashPaid - TotalBill;

    cout << "Area = " << Remainder << endl;

    return 0;
}