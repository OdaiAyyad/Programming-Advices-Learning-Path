#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "Enter a Number: "; cin >> N;

    return N;
}

int ReadPower()
{
    int M;
    cout << "Enter the Power: "; cin >> M;

    return M;
}

int Power(int N, int M)
{
    return pow(N, M);
}

int main()
{
    int N = ReadNumber();
    int M = ReadPower();

    cout << N << " ^ " << M << " = " << Power(N, M) << endl;

    return 0;
}