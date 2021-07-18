#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int result = 0;
    int iteration = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        result = result * 10 + lastDigit;
        number /= 10;
        iteration++;
    }

    cout << result << endl;

    return 0;
}