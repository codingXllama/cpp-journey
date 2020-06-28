#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{

    vector<char> myV;
    char userInput;

    cout << "Enter a string ";
    bool is_within_double_quotes = false;
    int doubleQuotesAmount = 0;
    while (cin >> noskipws >> userInput)
    {
        cout << "You just entered: " << userInput << " ";

        if (userInput == '"')
        {
            doubleQuotesAmount += 1;
            if (doubleQuotesAmount == 2)
            {
                break;
            }
        }

        else if (userInput == '\'' || userInput == '.' || userInput == '?' || userInput == '-' || userInput == '.')
        {
            myV.push_back(' ');
        }
        else
        {
            myV.push_back(userInput);
        }
    }

    // printing the content of the vector via range-based for loop
    cout << "The modified content is now: " << endl;
    for (auto item : myV)
    {
        cout << item;
    }
}