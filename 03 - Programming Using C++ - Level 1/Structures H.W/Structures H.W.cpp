#include <iostream>
#include <cmath>
using namespace std;

struct StAddress
{
    string Country;
    string City;
    string Street;
    string PoBox;
};

struct StSalary
{
    float MonthlySalary;
    float YearlySalary = MonthlySalary * 12;
};

struct StPerson
{
    string FullName;
    short Age;
    bool IsMarried;
    string Phone;
    StAddress Address;
    StSalary Salary;
};

int main()
{


    return 0;
}