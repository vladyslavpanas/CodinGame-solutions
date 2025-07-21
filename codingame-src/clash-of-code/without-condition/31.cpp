#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int length;
    int width;
    int height;
    cin >> length >> width >> height; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    if (length <= 0 || width <= 0 || height <= 0) {
        cout << "Invalid dimension" << endl;
    } else {
        int sum = length * width * height;
        cout << "The quantity of water in the room is " << sum << " cubic feet." << endl;
    }
    return 0;
}