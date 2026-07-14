/*
 * Problem : Even Odds
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/28/2025, 10:53:23 PM
 * Link: https://codeforces.com/contest/318/problem/A
 */

#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long odd_count = (n + 1) / 2;

    if (k <= odd_count)
        cout << 2 * k - 1 << endl;
    else
        cout << 2 * (k - odd_count) << endl;

    return 0;
}
