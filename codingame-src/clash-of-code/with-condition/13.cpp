// Condition: Ben is very broke. He cannot afford rent, so he is
// going to get a job this month so he won't be evicted. The job
// he is going to get pays P per hour, and he works H hours, and
// his rent costs R each month. Output YES if Ben can afford his
// rent with extra money, NO if he cannot afford his rent, and
// BARELY if he can afford his rent with no extra money

#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int p;
    cin >> p; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    int r;
    cin >> r; cin.ignore();

    int total = p * h;
    if (total > r) {
        cout << "YES" << endl;
    } else if (total == r) {
        cout << "BARELY" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}