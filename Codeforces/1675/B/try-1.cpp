/*
 * Problem : Make It Increasing
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++17 (GCC 7-32)
 * Date: 9/7/2025, 1:34:13 AM
 * Link: https://codeforces.com/contest/1675/problem/B
 */

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) // n
            cin >> a[i];
 
        long long ans = 0;
        for (int i = n - 2; i >= 0; i--) // n
        {
            while (a[i] >= a[i + 1]) // 31
            {
                ans++;
                a[i] /= 2;
                if (a[i] == 0)
                    break;
            }
            if (a[i] == 0 && a[i + 1] == 0)
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
