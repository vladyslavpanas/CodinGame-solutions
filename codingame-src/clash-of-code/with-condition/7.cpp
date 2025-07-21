// Condition: Find the number of different ways of ordering a list
// of n elements.

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
    unsigned long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << factorial << endl;
    return 0;
}