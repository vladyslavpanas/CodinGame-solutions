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
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string row;
        getline(cin, row);
        if (row.empty()) {
            cout << endl;
        } else if (row.length() % 2 == 0) {
            for (int j = 0; j < row.length(); ++j) {
                row[j] = toupper(row[j]);
            }
            cout << row << endl;
        } else {
            for (int j = 0; j < row.length(); ++j) {
                row[j] = tolower(row[j]);
            }
            cout << row << endl;
        }
    }
    
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}