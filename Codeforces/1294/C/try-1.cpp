/*
 * Problem : Product of Three Numbers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/9/2026, 10:23:55 PM
 * Link: https://codeforces.com/contest/1294/problem/C
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
     
        vector<ll>ans;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                n=n/i;
                ans.push_back(i);
            }
            if(ans.size()==2)break;
        }
        if(n==1||ans.size()<2||n==ans[0]||n==ans[1])cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<ans[0]<<" "<<ans[1]<<" "<<n<<endl;
        }
    }



    return 0;
}
