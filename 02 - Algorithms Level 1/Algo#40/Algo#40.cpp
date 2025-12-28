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

float CalculateTotalBillAfterServiceAndTax(float BillValue)
{
    float TotalBill;

    TotalBill = BillValue * 1.10;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main()
{
    float BillValue = ReadPositiveNumber("Enter your bill value: ");

    cout << "\n";
    cout << "Bill Value = " << BillValue << endl;
    cout << "Total Bill after Service Fee and Sales Tax = " << CalculateTotalBillAfterServiceAndTax(BillValue) << endl;

    return 0;
}