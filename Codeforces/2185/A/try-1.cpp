/*
 * Problem : Perfect Root
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/18/2026, 8:19:16 PM
 * Link: https://codeforces.com/contest/2185/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<i*i<<" ";
        }
        cout<<endl;
    }
}
