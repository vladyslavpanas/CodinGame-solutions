// Condition: We're in the hotel lobby and an empty elevator opens.
// Plan the optimal route and output the amount of stops and the
// amount of time (1 unit of time per floor and 2 for every stop
// including the last).

#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    set<int> floors;
    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        floors.insert(f);
    }
    if (floors.empty()) {
        cout << 0 << endl << 0 << endl;
        return 0;
    }
    int stops = (int)floors.size();
    if (floors.count(0)) {
        stops -= 1;
    }
    int min_floor = *floors.begin();
    int max_floor = *floors.rbegin();
    int distance = 0;
    if (min_floor >= 0) {
        distance = max_floor;
    } else if (max_floor <= 0) {
        distance = abs(min_floor);
    } else {
        int distance_min = abs(min_floor);
        int distance_max = max_floor;
        int closer;
        if (distance_min < distance_max) {
            closer = distance_min;
        } else {
            closer = distance_max;
        }
        distance = closer + (max_floor - min_floor);
    }
    int time = distance + 2 * stops;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << stops << endl;
    cout << time << endl;
    return 0;
}