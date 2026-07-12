/*
 * Problem : Effective Approach
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/25/2025, 9:04:46 PM
 * Link: https://codeforces.com/contest/227/problem/B
 */

#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    unordered_map<int, int> pos;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i + 1;  // 1-based indexing
    }

    int m;
    cin >> m;
    long long vasya = 0, petya = 0;

    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        int idx = pos[b];           // position of b in the array
        vasya += idx;               // from left: 1-based index
        petya += (n - idx + 1);     // from right
    }

    cout << vasya << " " << petya << endl;
    return 0;
}
