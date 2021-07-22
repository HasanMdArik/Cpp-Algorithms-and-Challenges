#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[size];
    }

    int maximumNumber = array[0];

    for (int i = 0; i < size; i++)
    {
        maximumNumber = max(maximumNumber, array[i]);
        cout << "Max till " << i << " - " << maximumNumber << endl;
    }

    return 0;
}
