#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string text;
    getline(cin, text);
    int time_seconds;
    cin >> time_seconds;
    cin.ignore();

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    double char_count = text.length();
    double time_minutes = time_seconds/60.0;
    double cpm = 0.0;
    if (time_minutes > 0) {
        cpm = char_count/time_minutes;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << fixed << setprecision(1) << cpm << " cpm" << endl;
    return 0;
}