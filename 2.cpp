#include <iostream>
#include <string>
#define MAXSIZE 10000

using namespace std;
int main()
{
    bool isDoubleQ = false;

    char myBuffer[MAXSIZE];
    string dataToModify;

    // Getting user input char by char
    cout << "Please enter a string: ";
    cin.getline(myBuffer, MAXSIZE);

    // storing the input into a string variable so we can later manipluate it's content
    dataToModify = myBuffer;

    // storing the result
    string result;

    //keep track of double quotes
    int doubleQ_count = 0;

    // iterating through each character in the bufferArray

    for (size_t i = 0; i < dataToModify.size(); i++)
    {

        if (dataToModify[i] == '"')
        {
            isDoubleQ = true;
            doubleQ_count += 1;
            if ((doubleQ_count % 2) == 0 && isDoubleQ)
            {
                result == dataToModify;
                break;
            }
        }
        else
        {

            switch (dataToModify[i])
            {
            case '-':
            case '?':
            case ',':
            case '\'':
            case '.':
                dataToModify[i] = ' ';
                break;
            }
        }
    }
    result = dataToModify;
    cout << "The modified content is: " << result << endl;
}