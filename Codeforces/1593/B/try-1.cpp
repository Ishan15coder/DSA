/*
 * Problem : Make it Divisible by 25
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 10/19/2025, 6:15:54 PM
 * Link: https://codeforces.com/contest/1593/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 1e9; 
        vector<string> targets = {"00", "25", "50", "75"};

        for (auto t : targets) {
            int cnt = 0;  
            int j = 1;   

            for (int i = n - 1; i >= 0; i--) {
                if (s[i] == t[j]) {
                    j--; 
                    if (j < 0) break; 
                } else {
                    cnt++; 
                }
            }
            if (j < 0) ans = min(ans, cnt); 
        }

        cout << ans << endl;
    }
    return 0;
}
