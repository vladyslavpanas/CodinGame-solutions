#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    int sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        if (isalpha(c)) {
            c = tolower(c);
            sum += c - 'a';
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    char res = 'a' + (sum % 26);
    cout << res << endl;
    return 0;
}