#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Inverted Number Pattern \n"
         << "> ";
    cin >> n;

    for (int num = 0; num < n; num++)
    {
        for (int i = 1; i <= (n - num); i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}