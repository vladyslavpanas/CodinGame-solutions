// Condition: Given a string s, return the string with a space
// separating each group of consecutive identical characters.
// Case matters!

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

    if (s.empty()) {
        cout << endl;
        return 0;
    }
    cout << s[0];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cout << s[i];
        } else {
            cout << " " << s[i];
        }
    }
    cout << endl;
    return 0;
}