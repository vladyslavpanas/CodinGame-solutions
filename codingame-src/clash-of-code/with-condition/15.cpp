// Condition: You are given a string S consisting of two
// concatenated digits. Let A be the first digit and B second
// digit. If both A and B are zero, output Nothing Lol.
// Otherwise, output "#"s A times and "*"s B times.

#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int A = s[0] - '0';
    int B = s[1] - '0';
    if (A == 0 && B == 0) {
        cout << "Nothing Lol" << endl;
    } else {
        for (int i = 0; i < A; i++) {
            cout << "#";
        }
        for (int i = 0; i < B; i++) {
            cout << "*";
        }
    }
    return 0;
}