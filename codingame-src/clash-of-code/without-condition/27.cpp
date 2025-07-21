#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    int s, d;
    cin >> s >> d; cin.ignore();
    int fastest = round((double)d / s * 60);
    for (int i = 1; i < n; i++) {
        cin >> s >> d; cin.ignore();
        int time = round((double)d / s * 60);
        if (time < fastest) {
            fastest = time;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << fastest << endl;
    return 0;
}