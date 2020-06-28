#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    char result;
    bool is_within_double_quotes = false;
    char byte;

    while (cin >> noskipws >> byte)
    {
        if (byte == '"')
        {
            is_within_double_quotes = !is_within_double_quotes;
        }

        if (!is_within_double_quotes)
        {
            switch (byte)
            {
            case '.':
            case '?':
            case '\'':
            case '-':
                result = ' ';
                break;
            default:
                result = byte;
                break;
            }
        }
        else
        {
            result = byte;
        }
        cout << result;
    }
}