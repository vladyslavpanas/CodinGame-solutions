// Condition: You are playing Shifumi with an opponent.
// Your opponent and yourself can play Scissors, Hand, Stone or any
// other string value.
// Shifumi rules:
//- Scissors win over Hand
// - Hand win over Stone
// - Stone win over Scissors
// - If your opponent play anything else than Scissors, Hand or
// Stone, you must tell him Error to win.
// You are required to output the winning move.

#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string o;
    getline(cin, o);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    if (o == "Scissors") {
        cout << "Stone" << endl;
    } else if (o == "Hand") {
        cout << "Scissors" << endl;
    } else if (o == "Stone") {
        cout << "Hand" << endl;
    } else {
        cout << "Error" << endl;
    }
    return 0;
}