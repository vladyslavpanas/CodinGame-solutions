#include <iostream>
#include <string>
using namespace std;

int main()
{
    string o;
    int x;
    int n;
    cin >> o >> x >> n; cin.ignore();

    /**
     * Auto-generated code below aims at helping you parse
     * the standard input according to the problem statement.
     **/

    string s = to_string(n);
    bool isNegative = false;
    if (s[0] == '-') {
        isNegative = true;
        s = s.substr(1);
    }
    if (x < 0 || x > s.length()) {
        return 1;
    }
    string left = s.substr(0, x);
    string right = s.substr(x);
    int a = 0;
    if (!left.empty()) {
        a = stoi(left);
    }
    int b = 0;
    if (!right.empty()) {
        b = stoi(right);
    }
    int result = 0;
    if (o == "+") {
        result = a + b;
    } else if (o == "-") {
        result = a - b;
    } else if (o == "*") {
        result = a * b;
    } else if (o == "/") {
        result = a / b;
    }
    if (isNegative) {
        result = -result;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << result << endl;
    return 0;
}