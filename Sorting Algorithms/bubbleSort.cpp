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
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    bubbleSort(array, n);

    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
    return 0;
}
