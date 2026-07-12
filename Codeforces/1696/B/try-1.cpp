/*
 * Problem : NIT Destroys the Universe
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/31/2025, 5:41:49 PM
 * Link: https://codeforces.com/contest/1696/problem/B
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int segs = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                segs++;
                while (i < n && a[i] != 0) i++; 
            }
        }

        if (segs == 0) cout << 0 << "\n";
        else if (segs == 1) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    return 0;
}
