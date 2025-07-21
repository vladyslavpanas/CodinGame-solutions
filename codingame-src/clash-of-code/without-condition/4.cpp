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

    for (int i=0; i<s.length(); ++i) {
        char c = toupper(s[i]);
        switch (c) {
            case 'O': s[i] = '0'; break;
            case 'L': s[i] = '1'; break;
            case 'Z': s[i] = '2'; break;
            case 'E': s[i] = '3'; break;
            case 'A': s[i] = '4'; break;
            case 'S': s[i] = '5'; break;
            case 'G': s[i] = '6'; break;
            case 'T': s[i] = '7'; break;
            case 'B': s[i] = '8'; break;
            case 'Q': s[i] = '9'; break;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << s << endl;
    return 0;
}