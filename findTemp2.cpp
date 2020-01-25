/*
The purpose of this example is to learn how to use vectors and rang-baed for loop to use the values
within the vector
*/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    vector<double> myTemps{99.1, 89.4, 34.5, 78.4};

    double averageTemp{};
    double sumOfTemp{};
    double sizeOfVector{0};

    for (auto item : myTemps)
    {
        sumOfTemp += item;
        sizeOfVector += 1;
    }

    cout << "The total sum of temps is: " << sumOfTemp << endl;
    cout << " Now Computing the Average temps, please wait.." << endl;

    averageTemp = sumOfTemp / sizeOfVector;
    cout << "The average temp is: " << averageTemp << " fahrenheit(s)" << endl;
}