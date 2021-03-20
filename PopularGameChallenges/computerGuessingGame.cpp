#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int radInt(int min, int max)
{
    int range = max - min + 1;
    int randomNumber = rand() % range + min;
    return randomNumber;
}

int main()
{
    srand(time(0));

    cout << "Think a number between 1 and 1000" << endl;
    int min = 1;
    int max = 1000;
    int tries = 0;
    string input;
    while (true)
    {
        int randomNumber = radInt(min, max);
        cout << "Is " << randomNumber << " the right number? (y)Yes, (l)bit lower, (h)bit higher> ";
        cin >> input;
        if (input == "y" || input == "Y")
        {
            tries++;
            cout << "Successful in " << tries << " tries!!!" << endl;
            break;
        }
        else if (input == "l" || input == "L")
        {
            min = randomNumber + 1;
            tries++;
            cout << min << "\t" << max << endl;
        }
        else if (input == "h" || input == "h")
        {
            max = randomNumber - 1;
            tries++;
            cout << min << "\t" << max << endl;
        }
        else
        {
            cout << "Please enter a valid answer. This one wasn't counted" << endl;
        }
    }

    return 0;
}