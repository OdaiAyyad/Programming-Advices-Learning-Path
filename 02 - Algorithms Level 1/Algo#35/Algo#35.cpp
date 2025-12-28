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

int main()
{
    unsigned int Pennies, Nickels, Dimes, Quarters, Dollars;



    float TotalPennies = Pennies + 5 * Nickels + 10 * Dimes + 25 * Quarters + 100 * Dollars;

    cout << "Total Pennies: " << TotalPennies << endl;
    cout << "Total Dollars: " << TotalPennies / 100 << end

    return 0;
}