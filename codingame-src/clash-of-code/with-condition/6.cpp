// Condition: Bob is running and wants to know how long it would
// take him to finish. The path Bob is running on can be pictured
// as a right triangle, where he is running on the hypotenuse.
// Given the two legs - a and b in terms of miles - and the average
// speed Bob is running at - s in terms of miles per hour - find
// the time it would take for Bob to finish running in hours and
// minutes rounded to the nearest minute.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    double a;
    cin >> a; cin.ignore();
    double b;
    cin >> b; cin.ignore();
    double s;
    cin >> s; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    double hypotenuse = sqrt(a*a + b*b);
    double time_h = hypotenuse / s;
    long long total_m = (long long)round(time_h * 60);
    long long hours = total_m / 60;
    long long minutes = total_m % 60;
    if (hours < 100) {
        cout << setfill('0') << setw(2);
    }
    cout << hours << ":";
    cout << setfill('0') << setw(2) << minutes << endl;
    return 0;
}