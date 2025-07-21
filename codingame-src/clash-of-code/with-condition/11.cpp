// Condition: Is there enough bread to feed the people for the
// amount of time?

#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int b;
    cin >> b; cin.ignore();
    int p;
    cin >> p; cin.ignore();
    int r;
    cin >> r; cin.ignore();
    int t;
    cin >> t; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int needed = p * r * t;
    if (b == needed) {
        cout << "Just enough bread" << endl;
    } else if (b > needed) {
        cout << "Enough bread" << endl;
    } else {
        cout << "Not enough bread" << endl;
    }
    return 0;
}