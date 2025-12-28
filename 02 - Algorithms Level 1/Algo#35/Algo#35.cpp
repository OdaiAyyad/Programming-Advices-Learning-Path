#include <iostream>
using namespace std;

struct stPiggyBankContent
{
    unsigned int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent Content;

    cout << "Enter the number of Pennies: "; cin >> Content.Pennies;
    cout << "Enter the number of Nickels: "; cin >> Content.Nickels;
    cout << "Enter the number of Dimes: "; cin >> Content.Dimes;
    cout << "Enter the number of Quarters: "; cin >> Content.Quarters;
    cout << "Enter the number of Dollars: "; cin >> Content.Dollars;

    return Content;
}

int CalculateTotalPennies(stPiggyBankContent Content)
{
    int TotalPennies = Content.Pennies + 5 * Content.Nickels + 10 * Content.Dimes + 25 * Content.Quarters + 100 * Content.Dollars;
}

int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    cout << "Total Pennies: " << TotalPennies << endl;
    cout << "Total Dollars: " << float(TotalPennies / 100) << endl;

    return 0;
}