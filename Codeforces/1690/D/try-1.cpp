/*
 * Problem : Black and White Stripe
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/4/2026, 7:52:07 PM
 * Link: https://codeforces.com/contest/1690/problem/D
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long l=0,r=0;
        long long ans=INT_MAX;
        long long c=0;
        while(r<n){
            if(s[r]=='W'){
                c++;
            }
            if(r-l+1==k){
                ans=min(ans,c);
                if(s[l]=='W')c--;
                l++;
            }
            r++;
        }
        cout<<ans<<endl;
    }






    return 0;
}
