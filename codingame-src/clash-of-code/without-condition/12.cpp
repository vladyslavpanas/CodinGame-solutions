#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    vector<int> rx, ry;
    int minD = -1;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        int d = (a - x)*(a - x) + (b - y)*(b - y);
        if (minD == -1 || d < minD) {
            rx = {a};
            ry = {b};
            minD = d;
        } else if (d == minD) {
            rx.push_back(a);
            ry.push_back(b);
        }
    }

    for (int i = 0; i < rx.size(); ++i) {
        for (int j = i + 1; j < rx.size(); ++j) {
            if (rx[i] > rx[j] || (rx[i] == rx[j] && ry[i] > ry[j])) {
                swap(rx[i], rx[j]);
                swap(ry[i], ry[j]);
            }
        }
    }

    for (int i = 0; i < rx.size(); ++i) {
        cout << rx[i] << " " << ry[i] << endl;
    }
    
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;    
}