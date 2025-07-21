// Condition: In a house there are X rooms , and in each room
// there are Y windows . How many windows in the house ?
// You should print the total number of windows in this house.

#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int x;
    int y;
    cin >> x >> y; cin.ignore();
    int total = x * y;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << total << endl;
    return 0;
}
