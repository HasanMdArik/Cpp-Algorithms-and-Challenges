#include <iostream>
using namespace std;

int binaryToDecimal(uint_fast64_t n)
{
    int result = 0;
    int baseValue = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        result += lastDigit * baseValue;
        baseValue *= 2;
        n = (n / 10);
    }
    return result;
}

int main(int argc, char const *argv[])
{
    uint_fast64_t binary;
    cin >> binary;
    cout << binaryToDecimal(binary) << endl;

    return 0;
}
