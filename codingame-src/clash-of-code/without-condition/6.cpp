#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    int height = 0;
    int used = 0;
    for (int i = 1; ; ++i) {
        if (used + i <= n) {
            used += i;
            height++;
        } else {
            break;
        }
    }
    int remaining = n - used;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << height << " " << remaining << endl;
    return 0;
}