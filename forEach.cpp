#include <iostream>

using namespace std;

int main()
{

    int scores[]{1, 2, 3, 0, 1};

    //! for each loop with type int var_type
    // for (int theScore : scores)
    // {
    //     cout << theScore << endl;
    // }

    //? for each loop with type auto var_type
    for (auto item : scores)
    {
        cout << item << endl;
    }
}
