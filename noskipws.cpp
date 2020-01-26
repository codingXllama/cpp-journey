//example of how the noskipws() manipulator  work in cpp
// the noskipws manipulator prevents skipping the whitespace.

#include <iostream>
#include <iomanip> // for std::noskipws
#include <string>

using namespace std;

int main()
{

    char fname;
    char mname;
    char lname;
    cout << "Enter your first and last name: ";
    cin >> noskipws >> fname >> mname >> lname;
    cout << "your first name name is " << fname << "\nyour middle name is " << mname << "\nyour last name is: " << lname << endl;
}