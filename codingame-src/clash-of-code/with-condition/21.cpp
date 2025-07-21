// Condition: You are given a grid representing a minefield. Your
// task is to count all the mines in the grid and output the total
// number. The grid is represented as a 2D array, where M
// represents a mine and . represents an empty space.

#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    int m;
    cin >> n >> m; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int mine_count = 0;
    for (int i = 0; i < n; i++) {
        string row;
        getline(cin, row);
        for (int j = 0; j < m; j++) {
            if (row[j] == 'M') {
                mine_count++;
            }
        }
    }
    cout << mine_count << endl;
    return 0;
}