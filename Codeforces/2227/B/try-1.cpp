/*
 * Problem : Party Monster
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/30/2026, 8:13:55 PM
 * Link: https://codeforces.com/contest/2227/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string a;
        cin>>a;
        ll cnt1=0;
        ll cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]=='(')cnt1++;
            if(a[i]==')')cnt2++;
        }
        if(cnt1==cnt2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



    return 0;
}
