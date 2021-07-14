#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Count Prime number from x to nth range" << endl
         << "start, end > ";
    int start, end;
    cin >> start >> end;
    int *primeNumbers = NULL;
    int range = end - start;
    cout << endl;
    int primeNumbersSize = sqrt(end);
    primeNumbers = new int[range]{2};
    int index = 1;
    for (int i = 2; i <= end; i++)
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
        if (isPrime == true && i >= start)
        {
            primeNumbers[index] = i;
            index++;
        }
    }

    // Printing the prime numbers

    for (int i = 0; i < primeNumbersSize; i++)
    {
        if (primeNumbers[i] >= start)
        {
            cout << primeNumbers[i] << endl;
        }
    }

    return 0;
}