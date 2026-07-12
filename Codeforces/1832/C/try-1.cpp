/*
 * Problem : Contrast Value
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/3/2026, 4:23:17 PM
 * Link: https://codeforces.com/contest/1832/problem/C
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
        ll mini=INT_MAX;
        ll maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(a[i],mini);
            maxi=max(a[i],maxi);
        }
        if(mini==maxi)cout<<1<<endl;
        else{
            int i=0;
            vector<ll>ans;
            ans.push_back(a[0]);

            for(int j=2;j<n;j++){
                int mid=j-1;
                if((abs(a[i]-a[mid])+abs(a[mid]-a[j]))>abs(a[j]-a[i])){
                    i=mid;
                    ans.push_back(a[mid]);
                }
            }
            ans.push_back(a[n-1]);
            cout<<ans.size()<<endl;
        }
    }



    return 0;
}
