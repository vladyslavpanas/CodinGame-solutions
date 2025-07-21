// Condition: Given a number N sum up all even numbers from 2 to N.

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

    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}