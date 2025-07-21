// Condition: You need to calculate the time it takes for a victim
// to escape a room based on their actions, represented by the
// following symbols:
// . → Move forward by 1 step (2 seconds)
// < → Move backwards by 2 steps (4 seconds)
// | → Stop for 5 seconds
// An additional 2 seconds must be added for a final step
// forward to escape. If the total time is 10 seconds or less,
// output ERROR. Otherwise, output Room Escaped followed by the
// total_time in seconds.

#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string description;
    getline(cin, description);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int total = 0;
    for (int i = 0; i < (int)description.size(); i++) {
        char c = description[i];
        if (c == '.') {
            total += 2;
        } else if (c == '<') {
            total += 4;
        } else if (c == '|') {
            total += 5;
        }
    }
    total += 2;
    if (total <= 10) {
        cout << "ERROR" << endl;
    } else {
        cout << "Room Escaped" << endl;
        cout << total << endl;
    }
    return 0;
}