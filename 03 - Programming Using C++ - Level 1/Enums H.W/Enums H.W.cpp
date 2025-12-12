#include <iostream>
#include <cmath>
using namespace std;

enum Gender { Male, Female };
enum Status { Single, Married };
enum FavColor { Red, Green ,Yellow, Blue, Black, White, Pink, Purple, Brown };

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
    float YearlySalary;
};

struct StPerson
{
    string FullName;
    short Age;
    Status Status;
    Gender Gender;
    string Phone;
    StAddress Address;
    StSalary Salary;
    FavColor FavColor;
};

int main()
{
    StPerson person1;

    person1.FullName = "Odai Ayyad";
    person1.Age = 23;
    person1.Gender = Gender::Male;
    person1.Status = Status::Single;
    person1.Salary.MonthlySalary = 7500;
    person1.Salary.YearlySalary = person1.Salary.MonthlySalary * 12;
    person1.Address.Country = "Jordan";
    person1.Address.City = "Amman";
    person1.FavColor = FavColor::Blue;



    return 0;
}