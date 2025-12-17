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



    return 0;
}