#include <iostream>
using namespace std;

bool isParenthesesBalanced(string input)
{

    char openingParentheseses[(input.length() / 2)];
    int lastFilledIndex = -1;

    for (int i = 0; i < input.length(); i++)
    {
        char currentChar = input[i];

        // Checking opening parantheseses
        if (currentChar == '(' || currentChar == '{' || currentChar == '[')
        {
            lastFilledIndex++;
            openingParentheseses[lastFilledIndex] = currentChar;
        }
        else if (lastFilledIndex < 0)
        {
            return false;
        }

        // Checking closing parantheseses
        if (currentChar == ')')
        {
            if (openingParentheseses[lastFilledIndex] != '(')
            {
                return false;
            }
            lastFilledIndex--;
        }
        else if (currentChar == '}')
        {
            if (openingParentheseses[lastFilledIndex] != '{')
            {
                return false;
            }
            lastFilledIndex--;
        }
        else if (currentChar == ']')
        {
            if (openingParentheseses[lastFilledIndex] != '[')
            {
                return false;
            }
            lastFilledIndex--;
        }
    }

    return true;
}

int main()
{
    string inp;
    inp = "[{()}]{{{}}}";

    cout << isParenthesesBalanced(inp) << endl;
}