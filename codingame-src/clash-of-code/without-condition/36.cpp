#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string b;
    cin >> b; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    for (int i = 0; i < (int)b.size(); i++) {
        if (b[i] == '0') {
            b[i] = '1';
        } else if (b[i] == '1') {
            b[i] = '0';
        }
    }
    cout << b << endl;
    return 0;
}