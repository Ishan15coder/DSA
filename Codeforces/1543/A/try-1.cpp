/*
 * Problem : Exciting Bets
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 12/29/2025, 12:36:21 AM
 * Link: https://codeforces.com/contest/1543/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b)cout<<0<<" "<<0<<endl;
        else {
            long long g=abs(a-b);
            long long ans=min(b%g,g-b%g);
            cout<<g<<" "<<ans<<endl;
    }}

    return 0;
}
