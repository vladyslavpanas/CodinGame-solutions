#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string x;
    getline(cin, x);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    for (int i = 0; i < (int)x.size(); i++) {
        cout << x[i];
        if (i != (int)x.size() - 1) {
            cout << "-";
        }
    }
    cout << endl;
    return 0;
}