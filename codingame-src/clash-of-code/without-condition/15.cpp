#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    reverse(input.begin(), input.end());
    cout << input.length() << " " << input << endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}