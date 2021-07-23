#include <iostream>
using namespace std;

int sumOfAllSubArrays(int array[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += (array[i] * (size - i) * (i + 1));
    }
    return result;
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

    cout << sumOfAllSubArrays(array, size) << endl;

    return 0;
}
