#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n)
{
    return (n * (1 + n) / 2);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << sumOfNaturalNumbers(n) << endl;
    return 0;
}
