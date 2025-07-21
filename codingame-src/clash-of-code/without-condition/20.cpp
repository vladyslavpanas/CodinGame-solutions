#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t;
    getline(cin, t);

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    for (int i = 0; i + 1 < t.length(); i += 2) {
        swap(t[i], t[i + 1]);
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << t << endl;
    return 0;
}