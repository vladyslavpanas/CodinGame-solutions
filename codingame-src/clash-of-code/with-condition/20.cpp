// Condition: You are given m integers each on a separate line.
// If an integer n is divisible by 2 multiply it by 2 otherwise
// multiply it by 3. For example if input is 1, 2, 3, the output
/// should be 3, 4, 9.

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

    for (int i = 0; i < m; i++) {
        int n;
        cin >> n; cin.ignore();
        if (n % 2 == 0) {
            cout << n * 2 << endl;
        } else {
            cout << n * 3 << endl;
        }
    }
    return 0;
}