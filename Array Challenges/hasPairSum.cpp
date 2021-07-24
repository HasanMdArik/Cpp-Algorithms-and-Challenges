#include <iostream>
using namespace std;

bool hasPairSum(int array[], int size, int targetValue)
{
    for (int i = 1; i < size; i++)
    {
        if ((array[i] + array[i - 1]) == targetValue)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, const char **argv)
{
    int n, k;
    cin >> n >> k;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    if (hasPairSum(array, n, k))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}