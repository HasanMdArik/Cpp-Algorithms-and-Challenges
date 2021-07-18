#include <iostream>
using namespace std;

int hexToDecimal(string n)
{
    int result = 0;
    int baseValue = 1;
    int size = n.size();

    for (int i = size - 1; i >= 0; --i)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            result += baseValue * (n[i] - '0');
        }
        else if (tolower(n[i]) >= 'a' && tolower(n[i]) <= 'f')
        {
            result += baseValue * (tolower(n[i]) - 'a' + 10);
        }
        baseValue *= 16;
    }

    return result;
}

int main(int argc, char const *argv[])
{
    string hexaDecimal;
    cin >> hexaDecimal;

    cout << hexToDecimal(hexaDecimal) << endl;

    return 0;
}
