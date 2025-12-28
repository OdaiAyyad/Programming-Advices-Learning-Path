#include <iostream>
using namespace std;

struct stPiggyBankContent
{
    unsigned int Pennies, Nickels, Dimes, Quarters, Dollars;
};

int main()
{
    unsigned int Pennies, Nickels, Dimes, Quarters, Dollars;

    cout << "Enter the number of Pennies: "; cin >> Pennies;
    cout << "Enter the number of Nickels: "; cin >> Nickels;
    cout << "Enter the number of Dimes: "; cin >> Dimes;
    cout << "Enter the number of Quarters: "; cin >> Quarters;
    cout << "Enter the number of Dollars: "; cin >> Dollars;

    float TotalPennies = Pennies + 5 * Nickels + 10 * Dimes + 25 * Quarters + 100 * Dollars;

    cout << "Total Pennies: " << TotalPennies << endl;
    cout << "Total Dollars: " << TotalPennies / 100 << endl

    return 0;
}