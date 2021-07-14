#include <iostream>
using namespace std;

void fib(int n)
{
    int termOne = 0;
    int termTwo = 1;
    int currentTerm = 0;

    for (int i = 0; i < n; ++i)
    {
        cout << currentTerm << endl;
        termOne = termTwo;
        termTwo = currentTerm + termTwo;
        currentTerm = termOne;
    }
    return;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    fib(n);

    return 0;
}
