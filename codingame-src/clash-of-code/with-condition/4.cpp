// Condition: Take every digit in the given number and decrease
// it by 1. If the digit is 0, remove it.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    string result;
    for (int i = 0; i < (int)n.size(); i++) {
        if (n[i] == '0') {
            continue;
        }
        char removed = n[i] - 1;
        result.push_back(removed);
    }

    if (result.empty()) {
        cout << 0 << endl;
    } else {
        cout << result << endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}