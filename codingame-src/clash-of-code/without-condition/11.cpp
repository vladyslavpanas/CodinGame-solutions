#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n; cin.ignore();
    int p;
    cin >> p; cin.ignore();

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    n %= 10;
    int result = 1;
    for (int i = 0; i < p; ++i) {
        result = (result * n) % 10;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    result = (result + 10) % 10;
    cout << result << endl;
    return 0;
}