#include <iostream>
using namespace std;

unsigned long decimalToBinary(int n)
{
    unsigned long result = 0;
    int baseValue = 1;
    while (n > 0)
    {
        int remainder = n % 2;
        result += (baseValue * remainder);
        baseValue *= 10;
        n /= 2;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << decimalToBinary(n) << endl;

    return 0;
}
