#include <iostream>
#include <string>
#include <cmath>
using namespace std;

short ReadNumberInRange(short From, short To)
{
    short Grade;
    do
    {
        cout << "Enter a grade between 0 and 100: "; cin >> Grade;

    } while (Grade < From || Grade > To);

    return Grade;
}

char GetGradeLetter(short Grade)
{
    if (Grade >= 90 && Grade <= 100)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    cout << "\nYour grade letter is: " << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;

    return 0;
}