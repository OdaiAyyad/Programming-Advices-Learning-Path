#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "Enter a Number: "; cin >> N;

    return N;
}



int main()
{


    cout << N << " ^ 2" << " = " << round(Power_2(N)) << endl;
    cout << N << " ^ 3" << " = " << round(Power_3(N)) << endl;
    cout << N << " ^ 4" << " = " << round(Power_4(N)) << endl;

    return 0;
}