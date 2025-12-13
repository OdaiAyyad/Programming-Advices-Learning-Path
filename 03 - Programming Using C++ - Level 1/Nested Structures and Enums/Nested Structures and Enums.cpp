#include <iostream>
#include <cmath>
using namespace std;

enum enColor { Red, Green, Blue };
enum enGender { Male, Female };
enum enMartialStatus { Single, Married };

struct stAddress
{
    string Country;
    string City;
    string Street;
    string PoBox;
};

struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};

struct stPerson
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;

    enColor FavColor;
    enMartialStatus MartialStatus;
    enGender Gender;
};

int main()
{
    stPerson person1;

    person1.FirstName = "Odai";
    person1.LastName = "Ayyad";

    person1.ContactInfo.Email = "abcd@gmail.com";
    person1.ContactInfo.Phone = "0123456789";
    person1.ContactInfo.Address.Country = "Jordan";
    person1.ContactInfo.Address.City = "Amman";
    person1.ContactInfo.Address.PoBox = "62001";
    person1.ContactInfo.Address.Street = "L8998";

    person1.Gender = enGender::Male;
    person1.FavColor = enColor::Blue;
    person1.MartialStatus = enMartialStatus::Single;

    cout << person1.FirstName << endl;
    cout << person1.MartialStatus << endl;
    cout << person1.FavColor << endl;

    return 0;
}