#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
    int rowSize, columnSize;

    cin >> rowSize >> columnSize;

    int array[rowSize][columnSize];

    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < columnSize; column++)
        {
            cin >> array[row][column];
        }
    }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < columnSize; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}