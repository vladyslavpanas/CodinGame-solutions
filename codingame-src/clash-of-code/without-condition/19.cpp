#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    vector<string> instruments(n);

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    for (int i = 0; i < n; i++) {
        getline(cin, instruments[i]);
    }
    int guitar_n = 0;

    for (int i = 0; i < n; i++) {
        if (instruments[i] == "guitar") {
            if (guitar_n % 2 == 0) {
                cout << "plinx" << endl;
            } else {
                cout << "plonx" << endl;
            }
            guitar_n++;
        } else if (instruments[i] == "drums") {
            if (i == n - 1) {
                cout << "tss" << endl;
            } else {
                cout << "badum" << endl;
            }
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    
    return 0;
}