#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < (int)s.length(); ++i) {
        char c = s[i];
        if (isLetter(c)) {
            if (isVowel(c)) {
                cout << "Fizz";
            } else {
                cout << "Buzz";
            }
        } else {
            cout << c;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << endl;
    return 0;
}
