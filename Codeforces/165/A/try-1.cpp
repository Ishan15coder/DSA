/*
 * Problem : Supercentral Point
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/26/2025, 10:37:31 PM
 * Link: https://codeforces.com/contest/165/problem/A
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> points(n);

    for (int i = 0; i < n; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    int supercentral_count = 0;

    for (int i = 0; i < n; ++i) {
        bool hasLeft = false, hasRight = false, hasUp = false, hasDown = false;

        for (int j = 0; j < n; ++j) {
            if (i == j) continue;

            if (points[j].second == points[i].second) {
                if (points[j].first < points[i].first) hasLeft = true;
                if (points[j].first > points[i].first) hasRight = true;
            }

            if (points[j].first == points[i].first) {
                if (points[j].second < points[i].second) hasDown = true;
                if (points[j].second > points[i].second) hasUp = true;
            }
        }

        if (hasLeft && hasRight && hasUp && hasDown)
            supercentral_count++;
    }

    cout << supercentral_count << endl;

    return 0;
}
