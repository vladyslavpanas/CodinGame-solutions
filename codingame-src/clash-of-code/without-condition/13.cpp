#include <iostream>
#include <string>
using namespace std;

int main()
{
    int awkwardness_level;
    cin >> awkwardness_level; cin.ignore();

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    if (awkwardness_level >= 1 && awkwardness_level <= 3) {
        cout << "I'll need to wake up early tomorrow." << endl;
    } else if (awkwardness_level >= 4 && awkwardness_level <= 6) {
        cout << "I'm feeling unwell, I need to leave." << endl;
    } else if (awkwardness_level >= 7 && awkwardness_level <= 9) {
        cout << "I forgot I have an important meeting soon." << endl;
    } else if (awkwardness_level == 10) {
        cout << "Sorry, but I think this isn't working out." << endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}