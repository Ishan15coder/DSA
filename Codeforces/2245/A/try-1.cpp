/*
 * Problem : Who Watches the Watchpig?
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/16/2026, 8:33:54 PM
 * Link: https://codeforces.com/contest/2245/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        ll cnt=0;
        ll ans=0;
        for(int i=0;i<n;i++){
            if(cnt==k)break;
            if(a[i]=='R' &&cnt<k){
                cnt++;
            }
            else if(a[i]=='L'&&cnt<k){
                a[i]='R';
                ans++;
                cnt++;
            }
        }
        cnt=0;
        for(int i=n-1;i>=0;i--){
            if(cnt==k)break;
            if(a[i]=='L' &&cnt<k){
                cnt++;
            }
            else if(a[i]=='R'&&cnt<k){
                a[i]='L';
                ans++;
                cnt++;
            }
        }
        ll ch=0;
        for(int i=0;i<k;i++){
           if(a[i]!='R'){
            ch=1;
            break;
           }
        }
        ll cok=0;
        for(int i=n-1;i>=0;i--){
            if(cok==k)break;
           if(a[i]!='L' &&cok<k){
            ch=1;
            break;
           }
           else cok++;
        }

        if(ch)cout<<-1<<endl;
        else cout<<ans<<endl;
    }



    return 0;
}
