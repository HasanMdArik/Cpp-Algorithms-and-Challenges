#include <iostream>
using namespace std;

int factorial(int number)
{
    int res = 1;
    for (int i = 1; i <= number; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << (factorial(n) / (factorial(r) * factorial(n - r))) << endl;

    return 0;
}
