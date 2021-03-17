#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Butterfly Pattern. \n"
         << "> ";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n * 2; col++)
        {
            if (col <= row)
            {
                cout << "* ";
            }
            else if (col > row && col < (2 * n) - (row - 1))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= n * 2; col++)
        {
            if (col <= row)
            {
                cout << "* ";
            }
            else if (col > row && col < (2 * n) - (row - 1))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}