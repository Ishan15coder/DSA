/*
 * Problem : Divide and Conquer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 6/30/2026, 8:34:46 PM
 * Link: https://codeforces.com/contest/2241/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%b==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



    return 0;
}
