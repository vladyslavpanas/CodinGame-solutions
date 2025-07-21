// Condition: The program: You will be given a positive
// integer N as input. Print the factorial of N.

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

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }
    cout << factorial << endl;
    return 0;
}