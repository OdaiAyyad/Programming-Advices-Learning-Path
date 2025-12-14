#include <iostream>
#include <cmath>
using namespace std;

int Power(int N, int M)
{
    return pow(N, M);
}

int main()
{
    int N, M;

    cout << "Enter a Number: "; cin >> N;
    cout << "Enter the Power: "; cin >> M;

    cout << N << " ^ " << M << " = " << round(Power(N, M)) << endl;

    return 0;
}