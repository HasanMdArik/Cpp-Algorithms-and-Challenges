#include <iostream>
using namespace std;

int sumOfSubArrays(int array[], int size)
{
    int sum = 0;
    for (int subArraySize = 1; subArraySize <= size; subArraySize++)
    {
        for (int startPoint = 0; startPoint <= (size - subArraySize); startPoint++)
        {
            for (int index = 0; index < subArraySize; index++)
            {
                sum += array[(index + startPoint)];
            }
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int sum = sumOfSubArrays(array, size);

    cout << sum << endl;

    return 0;
}
