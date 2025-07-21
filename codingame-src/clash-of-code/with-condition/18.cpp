// Condition: What is the sum of all angles in a convex polygon?
// For example: a triangle's angles have a sum of 180°
// a square has a sum of 360°

#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    if (n < 3) {
        cout << "ERROR" << endl;
    } else {
        cout << (n - 2) * 180 << endl;
    }
}