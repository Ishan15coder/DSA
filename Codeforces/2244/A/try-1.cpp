/*
 * Problem : Iskander and Drawings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/14/2026, 8:27:32 PM
 * Link: https://codeforces.com/contest/2244/problem/A
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
        string s;
        cin>>s;
        ll ma=0;
        ll se=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                se++;
            }
            else{
                ma=max(se,ma);
                se=0;
            }
        }
         ma=max(se,ma);
        if(ma%2==0)cout<<ma/2<<endl;
        else{
            cout<<(ma/2)+1<<endl;
        }
    }



    return 0;
}
