// Condition: The program: Your program must read two numbers and
// output the concatenation of their difference and sum.

#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int a;
    int b;
    cin >> a >> b; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int diff = a - b;
    int sum = a + b;
    cout << diff << sum << endl;
    return 0;
}