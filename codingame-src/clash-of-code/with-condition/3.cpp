// Condition: Convert a decimal number into an English word
// using Hexspeak.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    cin.ignore();

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    stringstream ss;
    ss << hex << uppercase << n;
    string hexString = ss.str();
    for (int i = 0; i < hexString.length(); i++) {
        if (hexString[i] == '0') {
            hexString[i] = 'O';
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << hexString << endl;
    return 0;
}
