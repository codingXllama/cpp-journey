#include <iostream>
#include <iomanip> // header for noskipws
// #include <fstream> // for reading files
using namespace std;
int main()
{

    char result;
    // ifstream fin("a1-input.dat");
    bool is_within_double_quotes = false;
    char byte;
    while (cin >> noskipws >> byte)
    {
        // check if current character is double quote
        if (byte == '"')
        {
            // toggle the flag to indicate text between double quotes
            is_within_double_quotes = !is_within_double_quotes;
        }
        // if current character is not inside double quotes, process it
        if (!is_within_double_quotes)
        {
            switch (byte)
            {
            case '.':
            case '?':
            case ',':
            case '\'':
            case '-':
                result = ' ';
                break;
            default:
                result = byte;
                break;
            }
        }
        // else print the character as is
        else
        {
            result = byte;
        }
        cout << result;
    }
}