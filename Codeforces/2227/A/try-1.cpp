/*
 * Problem : Koshary
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/30/2026, 8:10:39 PM
 * Link: https://codeforces.com/contest/2227/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x%2!=0&&y%2!=0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }



    return 0;
}
