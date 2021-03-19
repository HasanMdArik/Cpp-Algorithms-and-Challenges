#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    int tries = 0;
    string x;
    while (guess != randomNumber)
    {
        cout << "Guess the Number: ";
        cin >> x;
        // cout << (typeid(guess).name()) << endl;
        try
        {
            guess = stoi(x);
            tries++;
            if (guess > randomNumber)
            {
                cout << "Too High !" << endl;
            }
            else if (guess < randomNumber)
            {
                cout << "Too low!" << endl;
            }
        }
        catch (invalid_argument e1)
        {
            cout << "Please enter a number" << endl;
        }
    }

    cout << "Congrats! You did it in " << tries << " steps." << endl;

    return 0;
}