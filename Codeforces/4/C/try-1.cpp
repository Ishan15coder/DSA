/*
 * Problem : Registration System
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 6/28/2026, 10:26:42 AM
 * Link: https://codeforces.com/contest/4/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    unordered_map<string,int>m;
    while(t--){
        string s;
        cin>>s;
        if(m[s]==0){
            m[s]++;
            cout<<"OK"<<endl;
        }
        else{
            int i=m[s];
            m[s]++;
            while(true){
                if(m[s+to_string(i)]==0){
                    s+=to_string(i);
                    m[s]++;
                    cout<<s<<endl;
                    break;
                }
                i++;
            }
        }
    }



    return 0;
}
