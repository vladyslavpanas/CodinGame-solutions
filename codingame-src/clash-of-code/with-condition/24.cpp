// Condition: Given M minutes, you will have to convert from
// minutes to h and m (hour and minute format).
// Example: 100 minutes --------> 1h 40m.
// If M is less than 60 then hour is 0.
// Example: 50 minutes --------> 0h 50m.
// If there is no number of minutes after conversion then the
// minute is 0.
// Example: 60 minutes --------> 1h 0m.

#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int m;
    cin >> m; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int h = m / 60;
    int min = m % 60;
    cout << h << "h " << min << "m" << endl;
    return 0;
}