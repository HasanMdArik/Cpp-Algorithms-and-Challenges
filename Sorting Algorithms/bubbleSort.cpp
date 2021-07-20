#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int j = (size - 1); j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (array[i] > array[(i + 1)])
            {
                int temp = array[i];
                array[i] = array[(i + 1)];
                array[(i + 1)] = temp;
            }
        }
    }
    return;
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

    bubbleSort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}
