#include <iostream>
using namespace std;

int octalToDecimal(int n)
{
    int result = 0;
    int baseValue = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        result += lastDigit * baseValue;
        baseValue *= 8;
        n = (n / 10);
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int octal;
    cin >> octal;

    cout << octalToDecimal(octal) << endl;

    return 0;
}
