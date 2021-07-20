#include <iostream>
using namespace std;

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int current = array[i];
        while (current < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
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

    insertionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        if (i > 0)
        {
            cout << ", ";
        }
        cout << array[i];
    }
    cout << endl;

    return 0;
}
