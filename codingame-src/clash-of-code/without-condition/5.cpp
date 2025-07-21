#include <iostream>
#include <string>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string num;
    cin >> num; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int answer = 1;
    for (int i = 0; i < num.length(); ++i) {
        answer *= num[i] - '0';
    }
    cout << answer << endl;
    return 0;
}