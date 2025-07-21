#include <iostream>
#include <string>
using namespace std;

int main()
{
    string l;
    getline(cin, l);

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    string result = "";
    for (int i = 0; i < l.length(); ++i) {
        char originalChar = l[i];
        char transformedChar = originalChar + i;
        result += transformedChar;
    }
    cout << result << endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}