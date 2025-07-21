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
    char start = s.front();
    char end = s.back();
    int total = 0;
    for (char ch = start; ch <= end; ++ch) {
        total += (int)ch;
    }
    int present = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '*') {
            present += (int)s[i];
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << (total - present) << endl;
    return 0;
}