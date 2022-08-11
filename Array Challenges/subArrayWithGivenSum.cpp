#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
    int n, sum;
    cin >> n >> sum;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int startIndex = -1, endIndex = -1, sumOfSubArray = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfSubArray = 0;
        for (int j = i; j < n; j++)
        {
            sumOfSubArray += a[j];

            if (sumOfSubArray == sum)
            {
                endIndex = j;
                startIndex = i;
                break;
            }
            else if (sumOfSubArray > sum)
            {
                break;
            }
        }
        if (startIndex >= 0)
        {
            break;
        }
    }

    cout << startIndex << " " << endIndex << endl;

    return 0;
}
