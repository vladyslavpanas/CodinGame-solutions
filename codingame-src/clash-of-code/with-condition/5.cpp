// Condition: Given a digit N, you must print a reverse pyramid
// with the base containing N times that digit. Each consecutive
// row containing 1 digit less. The result should contain no spaces.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << n;
        }
        cout << endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}