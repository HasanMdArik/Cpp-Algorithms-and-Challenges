#include <iostream>
using namespace std;

unsigned long decimalToOctal(int n)
{
    unsigned long result = 0;
    int baseValue = 1;
    while (n > 0)
    {
        int remainder = n % 8;
        result += (baseValue * remainder);
        baseValue *= 10;
        n /= 8;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << decimalToOctal(n) << endl;

    return 0;
}
