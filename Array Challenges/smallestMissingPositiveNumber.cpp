#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;

    int array[size], maxNum = 0;

    for (int i = 0; i < size; i++)
    {
        int input;
        cin >> input;
        array[i] = input;
        maxNum = max(maxNum, input);
    }

    bool numArray[maxNum + 1];
    for (int i = 0; i <= maxNum; i++)
    {
        numArray[i] = false;
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] >= 0)
        {
            numArray[array[i]] = true;
        }
    }

    for (int i = 0; i <= maxNum; i++)
    {
        if (numArray[i] == false)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
