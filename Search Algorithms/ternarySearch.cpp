#include <iostream>
#include <cmath>
using namespace std;

int ternarySearch(int array[], int target, int low, int high)
{
    if (low >= high || low < 0)
    {
        return -1;
    }

    int lowerMid = (low + (high - low) / 3);
    int higherMid = (low + ceil((double)((high - low) * 2) / 3));
    if ((high - low) == 2 || higherMid > high)
    {
        --higherMid;
    }

    if (array[lowerMid] == target)
        return lowerMid;
    else if (array[higherMid] == target)
        return higherMid;
    else if (target > array[higherMid])
        return ternarySearch(array, target, higherMid, high);
    else if (target < array[lowerMid])
        return ternarySearch(array, target, low, lowerMid);
    else
        return ternarySearch(array, target, lowerMid, higherMid);
}

int main(int argc, char const *argv[])
{
    int n, target;
    cin >> n;
    cin >> target;

    int array[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    cout << ternarySearch(array, target, 0, (n - 1)) << endl;
    return 0;
}
