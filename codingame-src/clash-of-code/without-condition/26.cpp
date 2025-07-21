#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

int main()
{
    string partition;
    getline(cin, partition);
    vector<int> parts;
    stringstream ss(partition);
    string item;
    while (getline(ss, item, '+')) {
        int start = 0;
        while (start < item.size() && item[start] == ' ') {
            start++;
        }
        parts.push_back(stoi(item.substr(start)));
    }
    vector<int> conjugate;
    int m = 1;
    while (true) {
        int count = 0;
        for (int i = 0; i < parts.size(); i++) {
            if (parts[i] >= m) {
                count++;
            }
        }
        if (count == 0){
            break;
        }
        conjugate.push_back(count);
        m++;
    }
    for (int i = 0; i < conjugate.size(); i++) {
        if (i > 0) {
            cout << " + ";
        }
        cout << conjugate[i];
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << endl;
    return 0;
}