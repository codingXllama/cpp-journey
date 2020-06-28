#include <iostream>
#include <iomanip> // for using rhe noskipws keyword

using namespace std;

int main()
{

    // by default, we don't have any input so we set the below variable to false, let this be known as 'status flag'
    bool is_within_double_quotes = false;
    // this variable is used to read 1 character byte at a time from the user via standard input
    char byte;
    //
    int doubleQuotes_count = 0;

    // we keep reading user input, until the user terminates the while loop via CNTRL D
    while (cin >> noskipws >> byte)
    {
        // checking if our first character contains a double quotes, if yes, then we will modify the status flag  as follows
        if (byte == '"')
        {
            // we increment the value of double quotes
            doubleQuotes_count += 1;

            // in this case if doubleQuotes_count ==2 , this means that we have a starting double quote and a ending double quotes, and hence we don't need to modify the content within.
            if (doubleQuotes_count == 2)
            {
                // status flag and count reset.
                is_within_double_quotes = false;
                doubleQuotes_count = 0;
            }

            else
            {
                //this indicates we're not working with double quotes
                is_within_double_quotes = true;
            }
        }
        // when we're not dealing with double quotes, we will take the provided char, and then modify it according to the switch cases.
        if (!is_within_double_quotes)
        {
            // turning required punctuations input into spaces,according that char byte that is recieved from the user
            // this switch case checks for the following punctuations;
            //a '.' (dot), ',' (comma), '?' (question mark), '-' (dash), or a "'" (single quote), then it is replaced by a ' ' (space) character
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

        // displaying the result of the modified input to standard output
        cout << byte;
    }
}