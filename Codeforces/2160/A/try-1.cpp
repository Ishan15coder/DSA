/*
 * Problem : MEX Partition
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 10/19/2025, 6:54:01 PM
 * Link: https://codeforces.com/contest/2160/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> freq(102, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int ans = 0;

        // Step 1: find smallest number with freq == 0  (first missing)
        int first_missing = -1;
        for (int i = 0; i <= 100; i++) {
            if (freq[i] == 0) {
                first_missing = i;
                break;
            }
        }

        // // Step 2: find smallest number with freq == 1 before that
        // int second_missing = -1;
        // for (int i = 0; i <= 100; i++) {
        //     if (freq[i] <= 1) {
        //         second_missing = i;
        //         break;
        //     }
        // }

        ans = first_missing;
        cout << ans << endl;
    }
}
