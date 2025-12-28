#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number;
    do
    {
        cout << Message; cin >> Number;

    } while (Number < 0);

    return Number;
}

float CalculateRemainder(float TotalBill, float CashPaid)
{
    float Remainder = CashPaid - TotalBill;

    return Remainder;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Enter your total bill: ");
    float CashPaid = ReadPositiveNumber("Enter the paid cash: ");

    cout << "\n";
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Cash Paid = " << CashPaid << endl;
    cout << "****************\n\n";

    cout << "Remainder = " << CalculateRemainder(TotalBill, CashPaid) << endl;

    return 0;
}