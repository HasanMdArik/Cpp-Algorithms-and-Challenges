#include <iostream>
using namespace std;

int maxSumOfSubArrays(int array[], int size)
{
    int maxSum = INT32_MIN;
    int currentSum = 0;
    int limit = (size * 2) - 1;

    if (array[0] < 0 || array[size - 1] < 0)
    {
        limit /= 2;
        limit += 1;
    }

    for (int i = 0; i < limit; i++)
    {
        int index = i;
        if (index >= size)
        {
            index -= size;
        }
        currentSum += array[index];
        if (currentSum < 0)
            currentSum = 0;
        maxSum = max(maxSum, currentSum);
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