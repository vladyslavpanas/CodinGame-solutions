#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string fen;
    getline(cin, fen);

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    string currentRank;
    for (int i = 0; i < fen.length(); ++i) {
        char c = fen[i];
        if (c == '/') {
            for (int i = 0; i < currentRank.length(); ++i) {
                cout << currentRank[i];
                if (i < currentRank.length() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
            currentRank = "";
        } else if (isdigit(c)) {
            int emptySquares = c - '0';
            for (int i = 0; i < emptySquares; ++i) {
                currentRank += 'O';
            }
        } else {
            currentRank += c;
        }
    }
    for (int i = 0; i < currentRank.length(); ++i) {
        cout << currentRank[i];
        if (i < currentRank.length() - 1) {
            cout << " ";
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << endl;
    return 0;
}