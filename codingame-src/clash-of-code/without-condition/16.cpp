#include <iostream>
using namespace std;

int main()
{
    int d;
    cin >> d; cin.ignore();
    int n;
    cin >> n; cin.ignore();

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    d = ((d % 360) + 360) % 360;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int angle;
        cin >> angle; cin.ignore();
        int normal_angle = ((angle % 360) + 360) % 360;
        if (normal_angle == d) {
            count++;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << count << endl;
    return 0;
}