/*
 * Problem : Mainak and Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/31/2025, 2:43:58 PM
 * Link: https://codeforces.com/contest/1726/problem/A
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long answer = v[n-1] - v[0];  // case: no rotation

        // Case 1: put some element at the end
        for (int i = 1; i < n; i++) {
            answer = max(answer, v[i] - v[0]);
        }

        // Case 2: put some element at the start
        for (int i = 0; i < n-1; i++) {
            answer = max(answer, v[n-1] - v[i]);
        }

        // Case 3: rotate adjacent pair
        for (int i = 0; i < n-1; i++) {
            answer = max(answer, v[i] - v[i+1]);
        }

        cout << answer << endl;
    }
    return 0;
}
