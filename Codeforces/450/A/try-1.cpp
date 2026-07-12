/*
 * Problem : Jzzhu and Children
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/25/2025, 10:46:03 PM
 * Link: https://codeforces.com/contest/450/problem/A
 */

#include<iostream>
#include<vector>
using namespace std;

bool checker(vector<int>& io) {
    int flag = 0;
    for(int i = 0; i < io.size(); i++) {
        if(io[i] != 0) {
            flag = 1;
        }
    }
    if(flag) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int li = 0;
    while(!checker(s)) {
        for(int i = 0; i < n; i++) {
            if(s[i] == 0) continue;
            if(s[i] - m <= 0) {
                s[i] = 0;
                li = i + 1;
            } else {
                s[i] -= m;
                li = i + 1;
            }
        }
    }

    cout << li << endl;
    return 0;
}
