#include <iostream>
using namespace std;

template <typename T, size_t n>
int getSecondLargestElement(T (&array)[n])
{
    int largestValue = array[0];
    int distanceFromSecondLargestValue = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > largestValue)
        {
            distanceFromSecondLargestValue = array[i] - largestValue;
            largestValue = array[i];
        }
        else
        {
            int distance = largestValue - array[i];
            if (distance > 0 && distance < distanceFromSecondLargestValue)
            {
                distanceFromSecondLargestValue = distance;
            }
        }
    }
    return (largestValue - distanceFromSecondLargestValue);
}

int main(int argc, char const *argv[])
{
    int array[] = {2, 5, 1, 4, 1, 4, 13, 3, 414, 5, 3, 32, 1, 3, 14};

    cout << "Second largest value is: " << getSecondLargestElement(array) << endl;

    return 0;
}
