/*
 * Problem : CSES Task 1640
 * Difficulty: Unknown
 * Submission: Try 1
 * status: Accepted
 * Language: C++
 * Date: 9/20/2026, 7:45:50 PM
 * Link: https://cses.fi/problemset/task/1640
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, s;
    cin >> n >> s;

    vector<pair<long long,long long>> a(n);

    for(long long i = 0; i < n; i++){
        cin >> a[i].first;     // value
        a[i].second = i + 1;   // original index
    }

    sort(a.begin(), a.end());

    long long l = 0, r = n - 1;

    while(l < r){
        long long sum = a[l].first + a[r].first;

        if(sum == s){
            cout << a[l].second << " " << a[r].second;
            return 0;
        }
        else if(sum < s){
            l++;
        }
        else{
            r--;
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}

