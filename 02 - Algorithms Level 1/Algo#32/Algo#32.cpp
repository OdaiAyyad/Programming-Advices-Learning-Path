#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M;
    
    cout << "Enter a number: "; cin >> N;
    cout << "Enter the power you want: "; cin >> M;

    int R = pow(N, M);
    cout << "Result = " << R << endl;

    return 0;
}