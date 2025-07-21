#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    const long long mod = 1000000000;
    long long sum1 = 0;
    long long sum2 = 0;
    long long sum3 = 0;
    for (int i = 1; i <= n; i++) {
        sum1 = (sum1 + i) % mod;
        sum2 = (sum2 + (long long)i * i) % mod;
        sum3 = (sum3 + (long long)i * i * i) % mod;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << sum1 << "\n" << sum2 << "\n" << sum3 << "\n";
    return 0;
}