#include <iostream>
using namespace std;

int sumOfAllSubArrays(int array[], int size)
{
    int result = 0, tempSum = 0;
    for (int i = 0; i < size; i++)
    {
        tempSum = 0;
        for (int j = i; j < size; j++)
        {
            tempSum += array[j];
            result += tempSum;
        }
    }

    return result;
}

int main()
{
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << sumOfAllSubArrays(array, size) << endl;
}