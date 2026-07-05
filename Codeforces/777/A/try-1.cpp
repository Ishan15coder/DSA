/*
 * Problem : Shell Game
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/22/2025, 8:28:43 PM
 * Link: https://codeforces.com/contest/777/problem/A
 */

#include <iostream>
using namespace std;

int main() {
    long long n;
    int f;
    cin >> n >> f;

    int moves = n % 6; // pattern repeats every 6 moves
    while (moves--) {
        if ((moves + 1) % 2 == 1) { // odd move backward
            if (f == 0) f = 1;
            else if (f == 1) f = 0;
        } else { // even move backward
            if (f == 1) f = 2;
            else if (f == 2) f = 1;
        }
    }

    cout << f << endl;
    return 0;
}
