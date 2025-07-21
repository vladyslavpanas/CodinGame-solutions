#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    vector<int> links(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> links[i];
        if (links[i] < 1 || links[i] > n + 1) {
            cout << "Invalid input" << endl;
            return 0;
        }
        sum += links[i];
    }
    sort(links.begin(), links.end());
    for (int i = 1; i < n; ++i) {
        if (links[i] == links[i - 1]) {
            cout << "Invalid input" << endl;
            return 0;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int expSum = (n + 1) * (n + 2) / 2;
    cout << (expSum - sum) << endl;
    return 0;
}