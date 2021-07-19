#include <iostream>
using namespace std;

int binarySearch(int array[], int arraySize, int target)
{
    int start = 0;
    int end = arraySize - 1;
    int i = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] == target)
        {
            return mid;
        }
        else if (array[mid] > target)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
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

    int target;
    cin >> target;

    cout << binarySearch(array, size, target) << endl;

    return 0;
}
