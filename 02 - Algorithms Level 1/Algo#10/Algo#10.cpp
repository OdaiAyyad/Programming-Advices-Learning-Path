#include <iostream>
using namespace std;

int main()
{
    int mark1, mark2, mark3;

    cout << "Enter the first mark: "; cin >> mark1;
    cout << "Enter the second mark: "; cin >> mark2;
    cout << "Enter the third mark: "; cin >> mark3;

    cout << "Average = " << (mark1 + mark2 + mark3) / 3 << endl;

    return 0;
}