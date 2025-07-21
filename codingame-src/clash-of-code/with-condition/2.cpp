// Condition: You want to input an integer on an old calculator.
// Unfortunately, some of the number buttons are broken. You know
// which digits still work and are given a target number you want
// to reach or exceed. Your goal is to find the smallest integer
// greater than or equal to the target that you can type using only
// the working buttons.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();
    string button;
    getline(cin, button);

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    bool allowed[10] = {false};
    for (int i = 0; i < button.size(); i++) {
        int digit = button[i] - '0';
        allowed[digit] = true;
    }
    for (int i = n; i <= 999; i++) {
        string s = to_string(i);
        bool valid = true;
        for (int j = 0; j < s.size(); j++) {
            int digit = s[j] - '0';
            if (!allowed[digit]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << i << endl;
            break;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    return 0;
}