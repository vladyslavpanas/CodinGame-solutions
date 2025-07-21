#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int a;
    cin >> a; cin.ignore();
    int b;
    cin >> b; cin.ignore();
    int c;
    cin >> c; cin.ignore();
    int d;
    cin >> d; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int maximum = max({a, b, c, d});
    int minimum = min({a, b, c, d});
    cout << maximum - minimum << endl;
    return 0;
}