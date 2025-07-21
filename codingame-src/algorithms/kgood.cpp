// Algorithm to solve the "KGood" problem on CodinGame.
// https://www.codingame.com/training/hard/kgood
// Puzzles  Classic puzzle - Hard  KGood
// Pass all test cases to win the game.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);
    int K;
    cin >> K;
    vector<int> freq(26, 0);
    int uniqueCount = 0;
    int maxLen = 0;
    int left = 0;
    for (int right = 0; right < (int)s.size(); ++right) {
        int right_index = s[right] - 'a';
        if (freq[right_index] == 0) {
            ++uniqueCount;
        }
        ++freq[right_index];
        while (uniqueCount > K) {
            int left_index = s[left] - 'a';
            --freq[left_index];
            if (freq[left_index] == 0) {
                --uniqueCount;
            }
            ++left;
        }
        maxLen = max(maxLen, right - left + 1);
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << maxLen << endl;
    return 0;
}