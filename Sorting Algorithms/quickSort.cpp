#include <iostream>
using namespace std;
int iter = 0;
int iterRand = 0;

int partition(int array[], int l, int h)
{
    // Select pivot
    int pivot = (l + (rand() % (h - l)));
    int tempVal = array[pivot];
    array[pivot] = array[l];
    array[l] = tempVal;

    int j = l;
    for (int i = (l + 1); i <= h; i++)
    {
        if (array[i] < array[l])
        {
            ++j;
            tempVal = array[j];
            array[j] = array[i];
            array[i] = tempVal;
        }
        iterRand++;
    }

    // Swap pivot with element at j
    tempVal = array[j];
    array[j] = array[l];
    array[l] = tempVal;

    return j;
}

void mergeSort(int array[], int l, int h)
{
    if (l >= h)
    {
        return;
    }

    int finalPos = partition(array, l, h);

    mergeSort(array, l, (finalPos - 1));
    mergeSort(array, (finalPos + 1), h);
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

    srand(time(0));
    mergeSort(array, 0, (n - 1));

    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
    return 0;
}
