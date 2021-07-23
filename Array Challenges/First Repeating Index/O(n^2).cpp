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

    int nums[maxNum], firstRepeatingIndex = (N + 1);
    for (int i = 0; i < N; i++)
    {
        if (nums[a[i]] == a[i])
        {
            for (int j = 0; j < N; j++)
            {
                if (a[j] == a[i])
                {
                    firstRepeatingIndex = min(firstRepeatingIndex, (j + 1));
                }
            }
        }
        else
        {
            nums[a[i]] = a[i];
        }
    }

    cout << firstRepeatingIndex << endl;

    return 0;
}