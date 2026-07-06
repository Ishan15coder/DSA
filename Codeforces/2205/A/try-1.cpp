/*
 * Problem : Simons and Making It Beautiful
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/26/2026, 8:32:59 PM
 * Link: https://codeforces.com/contest/2205/problem/A
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
        vector<ll>a(n);
        v(a,n);
        ll ma=INT_MIN;
        ll ans1=-1;
        ll ans2=-1;
        for(int i=0;i<n;i++){
            ma=max(a[i],ma);
            if(ma==i+1&&ans1!=-1){
                ans2=i;
            }
            else if(ma==i+1){
                ans1=i;
            }
        }
        if(ans2!=-1&&ans2!=-1){
            swap(a[ans1],a[ans2]);
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
