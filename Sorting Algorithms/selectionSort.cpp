#include <iostream>
using namespace std;

// Selection sort works by finding the minimum element(in this case minimum number of the array)
// and swaps it with the number at the begining and then ignores the first number and does it again and again...

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minElement = INT32_MAX;
        int indexOfMin = -1;
        for (int j = i; j < size; j++)
        {
            minElement = min(minElement, array[j]);
            if (minElement == array[j])
            {
                indexOfMin = j;
            }
        }

        int temp = array[i];
        array[i] = minElement;
        array[indexOfMin] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int array[] = {2, 4, 5, 3, 2, 5, 1, 5, 6, 2, 3};
    int lengthOfArray = sizeof(array) / sizeof(int);
    cout << "Unsorted Array: [";
    for (int i = 0; i < lengthOfArray; i++)
    {
        if (i == 0)
        {
            cout << array[i];
        }
        else
        {
            cout << ", " << array[i];
        }
    }
    cout << "]\n";

    selectionSort(array, lengthOfArray);

    cout << "Sorted Array: [";
    for (int i = 0; i < lengthOfArray; i++)
    {
        if (i == 0)
        {
            cout << array[i];
        }
        else
        {
            cout << ", " << array[i];
        }
    }
    cout << "]\n";

    return 0;
}
