#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};

int main()
{
    stInfo People[2];

    People[0].FirstName = "Odai";
    People[0].LastName = "Ayyad";
    People[0].Age = 23;

    cout << People[0].FirstName << " " << People[0].LastName << endl;

    People[1].FirstName = "Ali";
    People[1].LastName = "Mohammad";
    People[1].Age = 55;

    cout << People[1].FirstName << " " << People[1].LastName << endl;

    return 0;
}