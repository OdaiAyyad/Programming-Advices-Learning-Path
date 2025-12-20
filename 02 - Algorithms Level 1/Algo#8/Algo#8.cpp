#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadMark()
{
    short Mark;
    cout << "Enter your mark: "; cin >> Mark;

    return Mark;
}

bool CheckMark(short Mark)
{
    if (Mark >= 50)
        return true;
    else
        return false;
}

void PrintResult(short Mark)
{
    if(CheckMark(Mark) == true)
        cout << "PASS!\n";
    else
        cout << "Fail.\n";
}

int main()
{
    PrintResult(ReadMark());

    return 0;
}