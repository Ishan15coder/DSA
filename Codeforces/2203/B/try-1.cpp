/*
 * Problem : Beautiful Numbers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/25/2026, 9:16:53 PM
 * Link: https://codeforces.com/contest/2203/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];
vector<ll>su(string n){
    ll sum=0;
    ll cnt=n.length();
    
    for(int i=0;i<n.length();i++){
        sum+=n[i]-'0';
    }
    vector<ll>ans;
    ans.push_back(sum);
    ans.push_back(cnt);
    return ans;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        vector<ll>p=su(n);
        if(p[0]<10)cout<<0<<endl;
        else{
            vector<ll>kj;
            for(int i=0;i<n.length();i++){
                kj.push_back(n[i]-'0');
                
            }
            // reverse(kj.begin(),kj.end());
            sort(kj.begin()+1,kj.end());
            int sk=0;
            int cnt=0;
            int sm;
            for(int i=0;i<kj.size();i++){
                if(sk+kj[i]<10){
                    sk+=kj[i];
                    cnt++;
                }
                else break;
            }
            ll z=cnt;
            sk=0;
            cnt=0;
            for(int i=1;i<kj.size();i++){
                if(sk+kj[i]<=8){
                    sk+=kj[i];
                    cnt++;
                }
                else break;
            }
            ll y=cnt;
            ll as=max(z,y);
            cout<<p[1]-as<<endl;
        }
    }



    return 0;
}
