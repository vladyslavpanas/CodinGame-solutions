#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string r;
    getline(cin, r);
    int forward_n = 0;
    for (int i = 0; i < (int)r.size(); i++) {
        char c = r[i];
        if (c == '-') {
            forward_n++;
        } else {
            if (forward_n > 0) {
                cout << "Go " << forward_n << " blocks Forward" << endl;
                forward_n = 0;
            }
            if (c == 'L') {
                cout << "Turn Left" << endl;
            } else if (c == 'R') {
                cout << "Turn Right" << endl;
            }
        }
    }
    if (forward_n > 0) {
        cout << "Go " << forward_n << " blocks Forward" << endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << "You ve reached your destination" << endl;
    return 0;
}