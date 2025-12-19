#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
    int SearchNum = 20;

    for (int i = 0; i <= 10; i++)
    {
        cout << "We are at iteration " << i << endl;

        if (arr[i] == SearchNum)
        {
            cout << "\n" << SearchNum << " found at position " << i << endl;
            break;
        }
    }

    return 0;
}