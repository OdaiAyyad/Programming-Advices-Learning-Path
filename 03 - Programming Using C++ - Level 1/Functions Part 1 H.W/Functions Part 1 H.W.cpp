#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void InformationCard()
{
    cout << "**********************\n";
    cout << "Name: Odai Ayyad.\n";
    cout << "Age: 23 Years.\n";
    cout << "Country: Jordan.\n";
    cout << "City: Amman.\n";
    cout << "**********************\n";
}

void StarsRows()
{
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
    cout << "********\n";
}

void RandomSentences()
{
    cout << "I Love Programming!\n\n";

    cout << "I Promise to be the best developer ever!\n\n";

    cout << "I know it will take some time to practice, but I will achieve my goal.\n\n";

    cout << "Best Regards,\n";
    cout << "Odai Ayyad\n";
}

int main()
{
    InformationCard();
    cout << endl;
    StarsRows();
    cout << endl;
    RandomSentences();
    cout << endl;

    return 0;
}