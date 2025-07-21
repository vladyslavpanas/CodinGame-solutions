// Algorithm to solve the "The Descent" problem on CodinGame.
// https://www.codingame.com/training/easy/the-descent
// Puzzles  Classic puzzle - Easy  The Descent
// Pass all test cases to win the game.

#include <iostream>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{

    // game loop
    while (1) {
        int max_h=0;
        int max_index=0;
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            if (mountain_h>max_h) {
                max_h=mountain_h;
                max_index = i;
            }
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << max_index << endl; // The index of the mountain to fire on.
    }
}