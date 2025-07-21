#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    getline(cin, n);

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    int L = n.size();
    string R = n;
    reverse(R.begin(), R.end());
    string U(L, '1');
    string result(L, '0');
    int borrow = 0;
    for (int i = L - 1; i >= 0; --i) {
        int d = (R[i] - '0') - (U[i] - '0') - borrow;
        if (d < 0) {
            d += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result[i] = char('0' + d);
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << "\n";
    return 0;
}