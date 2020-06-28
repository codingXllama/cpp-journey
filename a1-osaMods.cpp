#include <iostream>
#include <iomanip> // for using rhe noskipws keyword

using namespace std;

int main()
{

    // by default, we don't have any input so we set the below variable to false, let this be known as 'status flag'
    bool is_within_double_quotes = false;
    // this variable is used to read 1 character byte at a time from the user input (cin)
    char byte;

    // we keep reading user input, until the user terminates the while loop via CNTRL D
    while (cin >> noskipws >> byte)
    {
        // checking if our first character contains a double quotes, if yes, then we will modify the status flag to false
        if (byte == '"')
        {

            if (is_within_double_quotes)
            {
                is_within_double_quotes = false;
            }

            else
            {
                is_within_double_quotes = true;
            }
        }

        if (!is_within_double_quotes)
        {
            switch (byte)
            {
            case '.':
            case '?':
            case '\'':
            case '-':
                byte = ' ';
                break;
            }
        }

        cout << byte;
    }
}