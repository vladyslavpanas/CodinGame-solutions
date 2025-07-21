#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string a;
    getline(cin, a);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int len = (int)a.size() + 4;
    for (int i = 0; i < len; i++) {
        cout << "*";
    }
    cout << endl;
    cout << "* " << a << " *" << endl;
    for (int i = 0; i < len; i++) {
        cout << "*";
    }
    cout << endl;
    return 0;
}