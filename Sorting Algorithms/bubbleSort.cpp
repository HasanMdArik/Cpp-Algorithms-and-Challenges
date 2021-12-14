#include <iostream>
using namespace std;

// Bubble sort works by repeatedly swapping two adjacent elements if they are in wrong order

void bubbleSort(int array[], int size)
{
    for (int i = size; i > 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if (array[j] < array[j - 1])
            {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
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

    bubbleSort(array, lengthOfArray);

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
