/*
 * Problem : RemovevomeR
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 6/30/2026, 9:28:52 PM
 * Link: https://codeforces.com/contest/2241/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 1;
        for (int i = 1; i < n; i++)
                    if (s[i] != s[i - 1])cnt++;


        if (cnt == 1)
                      cout << 1 <<endl;

           else if (cnt == 2)
                cout << 2 <<endl;
         else
            cout << 1 <<endl;
    }

    return 0;
}
