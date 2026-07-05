/*
 * Problem : Gotta Catch Em' All!
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/22/2025, 8:01:54 PM
 * Link: https://codeforces.com/contest/757/problem/A
 */

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string t = "Bulbasaur";
    unordered_map<char, int> need, have;

    for (char c : t) need[c]++;  // required letters
    for (char c : s) if (need.count(c)) have[c]++;  // count available letters

    int ans = 1e9;
    for (auto it : need) {
        ans = min(ans, have[it.first] / it.second);  // check how many times we can form "Bulbasaur"
    }

    cout << ans << '\n';  // newline ensures output shows up
    return 0;
}
