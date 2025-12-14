#include <iostream>
#include <cmath>
using namespace std;

int Power_2(int N)
{
    return pow(N, 2);
}

int Power_3(int N)
{
    return pow(N, 3);
}

int Power_4(int N)
{
    return pow(N, 4);
}

int main()
{
    int N;

    cout << "Enter a Number: "; cin >> N;

    cout << N << " ^ 2" << " = " << round(Power_2(N)) << endl;
    cout << N << " ^ 3" << " = " << round(Power_3(N)) << endl;
    cout << N << " ^ 4" << " = " << round(Power_4(N)) << endl;

    return 0;
}