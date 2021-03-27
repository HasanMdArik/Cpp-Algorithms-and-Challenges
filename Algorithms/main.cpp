#include <iostream>
using namespace std;
int main()
{
    cout << "Count Prime number to n range" << endl
         << "n > ";
    int number = 1000000;
    cin >> number;
    cout << endl;
    int primeNumbersSize = number / 2;
    int primeNumbers[primeNumbersSize] = {2};
    int index = 1;

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