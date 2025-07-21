#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char c;
    cin >> c;

    if ((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z')) {
        for (char i = c + 1; i <= (isupper(c) ? 'Z' : 'z'); ++i) {
            cout << i << endl;
        }
    } else {
        cout << "Here's the end" << endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}