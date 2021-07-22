#include <iostream>
using namespace std;

int longestArithmiticSubArraySize(int array[], int size)
{
    int maxArithmiticArrayLength = 0;
    for (int subArraySize = 2; subArraySize <= size; subArraySize++)
    {
        for (int startPoint = 0; startPoint <= (size - subArraySize); startPoint++)
        {
            bool isArithmiticSubArray = true;
            int diff = array[0 + startPoint] - array[1 + startPoint];
            for (int index = 1; index < subArraySize; index++)
            {
                if ((array[index - 1 + startPoint] - array[index + startPoint]) != diff)
                {
                    isArithmiticSubArray = false;
                    break;
                }
            }
            if (isArithmiticSubArray)
            {
                maxArithmiticArrayLength = max(maxArithmiticArrayLength, subArraySize);
            }
        }
    }
    return maxArithmiticArrayLength;
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

    int longestArithmiticSubArrayLength = longestArithmiticSubArraySize(array, size);

    cout << longestArithmiticSubArrayLength << endl;

    return 0;
}
