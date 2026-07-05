/*
 * Problem : XORinacci
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/9/2025, 2:23:54 AM
 * Link: https://codeforces.com/contest/1208/problem/A
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        long long n;
        cin >> a >> b >> n;

        if(n % 3 == 0) cout << a << "\n";
        else if(n % 3 == 1) cout << b << "\n";
        else cout << (a ^ b) << "\n";
    }
    return 0;
}
