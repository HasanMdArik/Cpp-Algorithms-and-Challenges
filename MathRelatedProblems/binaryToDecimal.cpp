#include <iostream>
using namespace std;

int pow(int base, int power)
{
    if (power > 0)
    {
        int result = base;
        for (int i = 1; i < power; i++)
        {
            result *= base;
        }
        return result;
    }
    else
    {
        return 1;
    }
}

int binaryToDecimal(int n)
{
    int result = 0;
    for (int i = 0; n > 0; i++)
    {
        int lastDigit = n % 10;
        result += (lastDigit * pow(2, i));

        n = (n / 10);
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int binary;
    cin >> binary;

    cout << binaryToDecimal(binary) << endl;

    return 0;
}
