// Condition: Count the number of ones in the binary representation
// of each given integer.

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
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x; cin.ignore();
        int count = 0;
        while (x) {
            count += x & 1;
            x >>= 1;
        }
        cout << count << endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}