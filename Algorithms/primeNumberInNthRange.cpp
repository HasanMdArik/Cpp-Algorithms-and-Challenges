#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Count Prime number from 2 to nth range" << endl
         << "n > ";
    int number;
    cin >> number;
    cout << endl;
    int primeNumbersSize = sqrt(number) * 2;
    int primeNumbers[primeNumbersSize] = {2};
    int index = 1;

    cout << 2 << endl;

    for (int i = 2; i <= number; i++)
    {
        bool isPrime = true;
        for (int j = 0; j < primeNumbersSize; j++)
        {
            int item = primeNumbers[j];
            if (item != 0)
            {
                if (i % item == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if (isPrime == true)
        {
            primeNumbers[index] = i;
            cout << i << endl;
            index++;
        }
    }
    return 0;
}