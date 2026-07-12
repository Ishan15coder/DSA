/*
 * Problem : Sushi for Two
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/9/2025, 1:56:15 AM
 * Link: https://codeforces.com/contest/1138/problem/A
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int prev_len = 0; // length of previous block
    int curr_len = 1; // length of current block
    int ans = 0;

    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1]) {
            // same type, extend current block
            curr_len++;
        } else {
            // new type starts, calculate max valid segment
            ans = max(ans, 2 * min(prev_len, curr_len));
            prev_len = curr_len; // store current block as previous
            curr_len = 1;        // start new block
        }
    }

    // check last pair of blocks
    ans = max(ans, 2 * min(prev_len, curr_len));

    cout << ans << "\n";
    return 0;
}
