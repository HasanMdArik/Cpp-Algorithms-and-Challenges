#include <iostream>
using namespace std;

int maxSumOfSubArrays(int array[], int size)
{
    int maxSum = INT32_MIN;
    int localSum = 0;
    for (int i = 0; i < size; i++)
    {
        localSum = 0;
        for (int j = i; j < size; j++)
        {
            localSum += array[j];
            maxSum = max(maxSum, localSum);
        }
    }
    return maxSum;
}

int main(int argc, const char **argv)
{
    int size;
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << maxSumOfSubArrays(array, size) << endl;

    return 0;
}