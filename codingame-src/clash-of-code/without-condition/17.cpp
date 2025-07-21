#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    string word;

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    bool first = true;
    while (ss >> word) {
        reverse(word.begin(), word.end());
        if (!first) {
            cout << " ";
        }
        cout << word;
        first = false;
    }
    cout << endl;

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}