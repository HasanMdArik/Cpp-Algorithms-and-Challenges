#include <iostream>
#include <cstdlib>
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

int hexToDecimal(string n)
{
    int result;

    for (int i = (n.length() - 1); i >= 0; i--)
    {
        // char charcter = n[i];
        // int number =
        cout << n[i] << endl;
    }

    // for (int i = 0; n > 0; i++)
    // {
    //     int lastDigit = n % 10;
    //     result += (lastDigit * pow(16, i));

    //     n = (n / 10);
    // }
    return result;
}

int main(int argc, char const *argv[])
{
    string hexaDecimal;
    cin >> hexaDecimal;

    cout << hexToDecimal(hexaDecimal) << endl;

    return 0;
}
