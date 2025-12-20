#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2};

int ReadMark()
{
    short Mark;
    cout << "Enter your mark: "; cin >> Mark;

    return Mark;
}

enPassFail CheckMark(short Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(short Mark)
{
    if(CheckMark(Mark) == enPassFail::Pass)
        cout << "\nPASS!\n";
    else
        cout << "\nFail.\n";
}

int main()
{
    PrintResults(ReadMark());

    return 0;
}