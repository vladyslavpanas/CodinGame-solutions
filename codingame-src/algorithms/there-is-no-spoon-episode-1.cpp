// Algorithm to solve the "There is no Spoon - Episode 1" problem on CodinGame.
// https://www.codingame.com/training/medium/there-is-no-spoon-episode-1
// Puzzles  Classic puzzle - Medium  There is no Spoon - Episode 1
// Pass all test cases to win the game.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Don't let the machines win. You are humanity's last hope...
 **/

int main()
{
    int width; // the number of cells on the X axis
    cin >> width; cin.ignore();
    int height; // the number of cells on the Y axis
    cin >> height; cin.ignore();
    vector<string> cells(height);
    for (int i = 0; i < height; i++) {
        getline(cin, cells[i]); // width characters, each either 0 or .
    }
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (cells[y][x] != '0') {
                continue;
            }
            int right_x = -1, right_y = -1;
            for (int i = x + 1; i < width; ++i) {
                if (cells[y][i] == '0') {
                    right_x = i;
                    right_y = y;
                    break;
                }
            }
            int down_x = -1, down_y = -1;
            for (int i = y + 1; i < height; ++i) {
                if (cells[i][x] == '0') {
                    down_x = x;
                    down_y = i;
                    break;
                }
            }

    // Three coordinates: a node, its right neighbor, its bottom neighbor
            cout << x << " " << y << " ";
            if (right_x != -1 && right_y != -1) {
                cout << right_x << " " << right_y << " ";
            }
            else {
                cout << "-1 -1 ";
            }
            if (down_x != -1 && down_y != -1) {
                cout << down_x << " " << down_y << endl;
            }
            else {
                cout << "-1 -1" << endl;
            }
        }
    }
}
