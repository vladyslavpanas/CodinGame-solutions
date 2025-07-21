// Condition: Create a rectangle based on the specified height and
// width parameters. Use the letter "O" (Case-Sensitive) as the
// character making up the rectangle.

#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int height;
    cin >> height; cin.ignore();
    int width;
    cin >> width; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << 'O';
        }
        cout << endl;
    }
    return 0;
}