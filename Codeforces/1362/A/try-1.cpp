/*
 * Problem : Johnny and Ancient Computer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/25/2026, 10:11:18 AM
 * Link: https://codeforces.com/contest/1362/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<(n);i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        else if(a%2!=0&&b%2!=0){
            cout<<-1<<endl;
            continue;
        }
        // else if(__builtin_popcount(a)!=__builtin_popcount(b)){
        //     cout<<-1<<endl;
        //     continue;
        // }
        else{
            if(b>a){
                ll k=b/a;
                 k=log2(k);
                ll ans=0;

                while(k){
                    if(k>=3){
                       a=a<<3;
                        k-=3; 
                       ans++;
                    }
                    else if(k>=2){
                        a=a<<2;
                        k-=2; 
                        ans++;
                    }
                    else if(k>=1){
                        a=a<<1;
                        k-=1; 
                        ans++;
                    }
                    else break;
                }
                if(a==b)cout<<ans<<endl;
                else cout<<-1<<endl;
            }
            else{
                ll k=a/b;
                k=log2(k);
                ll ans=0;

                while(k){
                    if(k>=3 &&a%8==0){
                       a=a>>3;
                       k-=3; 
                       ans++;
                    }
                    else if(k>=2&&a%4==0){
                       a=a>>2;
                        k-=2; 
                        ans++;
                    }
                    else if(k>=1&&a%2==0){
                        a=a>>1;
                        k-=1; 
                        ans++;
                    }
                    else break;
                }
                if(a==b)cout<<ans<<endl;
                else cout<<-1<<endl;
            }
        }
    }



    return 0;
}
