#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else if (a == z)
    {
        b = x;
        c = y;
    }

    if (a * a == (b * b + c * c))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int a, b, c;

    cin >> a >> b >> c;

    if (check(a, b, c))
    {
        cout << "Pythogorian Triplet" << endl;
    }
    else
    {
        cout << "Not Pythogorian Triplet" << endl;
    }

    return 0;
}
