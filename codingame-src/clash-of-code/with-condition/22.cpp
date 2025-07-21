// Condition: Your program must switch the case of each character
// of the given string.

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

    for (int i = 0; i < (int)s.size(); i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}