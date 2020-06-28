/*
The purpose of this example is to, find frequency of chars in a given string from the user.s

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string userInput;
    cout << "Please Enter your name: ";
    getline(cin, userInput);
    cout << "Hello there " << userInput << endl;

    cout << "Displaying each of the chars in the string " << endl;
    for (auto item : userInput)
    {
        cout << item << endl;
    }

    vector<string> userName{userInput};
    vector<char> vals;

    for (auto item : userName)
    {
        if (vals.contains(item))
        {

        }
    }
