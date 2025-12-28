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

int PowerOfM(int N, int M)
{
    if (M == 0)
        return 1;

    int P = 1;
    for (int i = 1; i <= M; i++)
    {
        P *= N;
    }
    return P;
}

int main()
{
    int N = ReadNumber();
    int M = ReadPower();

    cout << "\n" << N << " ^ " << M << " = " << PowerOfM(N, M) << endl;

    return 0;
}