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
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    selectionSort(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
