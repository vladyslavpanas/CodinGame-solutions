#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int x;
    cin >> x; cin.ignore();
    int y;
    cin >> y; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int result = x * x + x * y;
    cout << result << endl;
    return 0;
}