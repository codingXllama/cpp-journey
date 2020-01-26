#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "hello there " << name << endl;

    // logic for checking the the input string and the characters it incldues,
    for (size_t i = 0; i < name.length(); ++i)
    {
        if (name[i] == 'o')
        {
            name[i] = '!';
        }
    }
    cout << "your new name is: " << name << endl;
}