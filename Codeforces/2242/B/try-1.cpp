/*
 * Problem : Predominant Frequency Division
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/6/2026, 9:37:55 PM
 * Link: https://codeforces.com/contest/2242/problem/B
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
        ll x=0,y=0,z=0;
        v(a,n);
        
        ll ch1=0;
        ll ch2=0;
        vector<ll>idx;
        for(int i=0;i<n;i++){
           if(a[i]==1)x++;
                if(a[i]==2)y++;
                if(a[i]==3)z++;


            if(x>=y+z){
                ch1=1;
                idx.push_back(i);
            }
        }
        for(int i=0;i<idx.size();i++){
            ll xc=0,yc=0,zc=0;
            
            for(int j=idx[i]+1;j<n;j++){
                if(a[j]==1)xc++;
                if(a[j]==2)yc++;
                if(a[j]==3)zc++;
                if(zc<=xc+yc&&j<n-1){
                    ch2=1;
                    break;
                }
            }
            if(ch2)break;
        }
        if(ch1==1 &&ch2==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



    return 0;
}
