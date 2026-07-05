/*
 * Problem : Move Brackets
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/19/2026, 12:22:32 PM
 * Link: https://codeforces.com/contest/1374/problem/C
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
       for(int i=0;i<s.length();i++){
        if(s[i]=='(')s[i]='o';
        else s[i]='c';
       }
       int o=0;
       int c=0;
       int ans=0;
       for(int i=0;i<s.length();i++){
            if(s[i]=='c'&&(o==0||o<c+1)){
                ans++;
            }
            else if(s[i]=='o'){
                o++;
            }
            else{
                o--;
                c--;
            }
       }
       cout<<ans<<endl;
    }



    return 0;
}
