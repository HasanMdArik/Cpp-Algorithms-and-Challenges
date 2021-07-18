#include <iostream>
using namespace std;

int factorial(int n)
{
    int factor = 1;
    for (int i = 1; i <= n; i++)
    {
        factor *= i;
    }
    return factor;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << factorial(n);

    return 0;
}
