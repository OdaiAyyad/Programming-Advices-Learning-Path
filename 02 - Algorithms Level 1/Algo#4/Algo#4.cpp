#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stInfo
{
    short Age;
    bool HasDriverLicense;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Enter your age: "; cin >> Info.Age;
    cout << "Do you have a driver license? "; cin >> Info.HasDriverLicense;

    return Info;    
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDriverLicense == true);
}

void PrintResults(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "Hired!\n";
    else
        cout << "Rejected!\n";
}

int main()
{
    PrintResults(ReadInfo());

    return 0;
}