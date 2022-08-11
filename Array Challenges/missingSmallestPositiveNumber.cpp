#include <iostream>
using namespace std;

int main()
{
    int size;

    cin >> size;

    int nums[size];

    int maxNum = -1;

    for (int i = 0; i < size; i++)
    {
        int inp;
        cin >> inp;
        nums[i] = inp;
        maxNum = max(maxNum, inp);
    }

    bool hasValue[maxNum];

    for (int i = 0; i < size; i++)
    {
        hasValue[nums[i]] = true;
    }

    for (int i = 0; i < maxNum; i++)
    {
        if (!hasValue[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}