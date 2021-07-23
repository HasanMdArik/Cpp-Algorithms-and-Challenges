#include <iostream>
using namespace std;

int longestArithmiticSubArrayLength(int array[], int size)
{
    int length = 1;
    int prevMaxLength = 0;
    int prevDiffernce = array[0] - array[1];
    int diff;
    for (int i = 1; i < size; i++)
    {
        diff = array[i - 1] - array[i];
        if (diff == prevDiffernce)
        {
            length++;
        }
        else
        {
            prevMaxLength = max(prevMaxLength, length);
            length = 2;
            prevDiffernce = diff;
        }
    }
    return max(length, prevMaxLength);
}

int main()
{
    int size;
    cin >> size;

    if (size < 2)
    {
        cout << 0 << endl;
        return 1;
    }

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << longestArithmiticSubArrayLength(array, size) << endl;
}