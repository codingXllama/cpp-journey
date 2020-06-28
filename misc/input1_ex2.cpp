#include <iostream>
#include <string>
#include <iomanip>
#include <istream>

using namespace std;

int main()
{
    int age1, age2, age3;
 
    cout << "Enter your first age: ";
    cin >> age1 >> age2 >> age3;
    static_cast<char>(age1);
    static_cast<char>(age2);
    static_cast<char>(age3);
    // cout << "Enter your second age: ";
    // cin >> age2;
    // cin >> age3;

    cout << "First age is " << age1 << " Second Age  is " << age2 << "your third age is" << age3 << endl;
}