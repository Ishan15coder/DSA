/*
 * Problem : MEXor Mixup
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/25/2026, 11:47:40 PM
 * Link: https://codeforces.com/contest/1567/problem/B
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
            vector<ll>ans;
            // for(int i=0;i<a;i++){
            //     ans.push_back(i);
            // }
            ll n=a-1;
            ll d;
            if(n%4==0){
                d=n;
            }
            else if(n%4==1){
                d=1;
            }
            else if(n%4==2){
                d=n+1;
            }
            else d=0;
            if(d==b){
                cout<<a<<endl;
            }
            else if((d^b)!=a){
                cout<<a+1<<endl;
            }
            else cout<<a+2<<endl;
        }



        return 0;
    }
