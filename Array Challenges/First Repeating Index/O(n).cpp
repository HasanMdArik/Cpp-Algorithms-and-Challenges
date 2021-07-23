#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
    int N, maxNum = INT32_MIN;
    cin >> N;

    int a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        maxNum = max(maxNum, a[i]);
    }

    int numIdxs[maxNum + 1], firstRepeatingIndex = (N + 1);

    for (int i = 0; i < (maxNum + 1); i++)
    {
        numIdxs[i] = -1;
    }

    for (int i = 0; i < N; i++)
    {
        if (numIdxs[a[i]] != -1)
        {
            firstRepeatingIndex = min(firstRepeatingIndex, numIdxs[a[i]]);
        }
        else
        {
            numIdxs[a[i]] = i;
        }
    }

    if (firstRepeatingIndex == (N + 1))
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (firstRepeatingIndex + 1) << endl;
    }

    return 0;
}