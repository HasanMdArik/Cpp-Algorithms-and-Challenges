#include <iostream>
using namespace std;

void SelectionSort(int array[], int arraySize)
{
    for (int i = 0; i < (arraySize - 1); i++)
    {

        for (int j = i + 1; j < arraySize; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    return;
}

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;

    int *array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    SelectionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}
