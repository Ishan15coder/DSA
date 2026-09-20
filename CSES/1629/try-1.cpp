/*
 * Problem : CSES Task 1629
 * Difficulty: Unknown
 * Submission: Try 1
 * status: Accepted
 * Language: C++
 * Date: 9/20/2026, 7:58:20 PM
 * Link: https://cses.fi/problemset/task/1629
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
   
    
        ll n;
        cin>>n;
        vector<pair<ll,ll>>a;
        
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a.push_back({y,x});
        }
        sort(a.begin(),a.end());
        // reverse(a.begin(),a.end());
        int cnt=1;
        int prev=a[0].first;
        for(int i=1;i<n;i++){
            if(a[i].second>=prev){
                cnt++;
                prev=a[i].first;
            }
        }
        cout<<cnt<<endl;


    return 0;
}
