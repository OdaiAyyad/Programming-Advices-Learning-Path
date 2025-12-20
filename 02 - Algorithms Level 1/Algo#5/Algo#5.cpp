#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stInfo
{
    short Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Enter your age: "; cin >> Info.Age;
    cout << "Do you have a driver license? "; cin >> Info.HasDriverLicense;
    cout << "Do you have a recommendation? "; cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation == true)
        return true;
    else
        return (Info.Age > 21 && Info.HasDriverLicense == true);
}

void PrintInfo(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\nHired!\n";
    else
        cout << "\nRejected!\n";
}

int main()
{
    PrintInfo(ReadInfo());

    return 0;
}