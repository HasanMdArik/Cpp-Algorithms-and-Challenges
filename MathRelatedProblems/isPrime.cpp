#include <iostream>
using namespace std;

int main()
{
    int number;
    bool isPrime = true;
    cout << "Please enter the number to check if that's a prime number or not" << endl
         << "number > ";
    cin >> number;

    for (int i = 2; i <= (number / 2); i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    isPrime ? cout << "Prime Number" : cout << "Not Prime Number";
    cout << endl;

    return 0;
}