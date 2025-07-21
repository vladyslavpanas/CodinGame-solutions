// Condition: Dogs age differently from humans. Your task is to
// calculate how old a dog would be in human years, based on a
// commonly used rule:
// The first 2 dog years count as 10.5 human years each. Each year
// after that counts as 4 human years. Write a program that takes
// the age of a dog as input and prints its equivalent age in
// human years.

#include <iostream>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int dog_age;
    cin >> dog_age; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    int human_age;
    if (dog_age <= 2) {
        human_age = dog_age * 10.5;
    } else {
        human_age = 2 * 10.5 + (dog_age - 2) * 4;
    }
    cout << human_age << endl;
    return 0;
}