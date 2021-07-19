#include <iostream>
using namespace std;

int linearSearch(int array[], int arraySize, int target)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == target)
        {
            return i;
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

    cout << linearSearch(array, size, target) << endl;

    return 0;
}
