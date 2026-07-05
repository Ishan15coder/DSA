/*
 * Problem : Destruction of the Dandelion Fields
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/13/2025, 9:38:33 PM
 * Link: https://codeforces.com/contest/2148/problem/D
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        vector<long long>od;
        long long ans=0;
        for(int i=0;i<n;i++){
            long long k;
            cin>>k;
            if(k%2==0){
                ans+=k;
            }
            else od.push_back(k);
        }
        if(od.size()==0){
            cout<<0<<endl;
        }
        else{
        sort(od.begin(),od.end(),greater<int>());
        // sort(ev.begin(),ev.end(),greater<int>());
            
            if(od.size()%2==0){
        for(int i=0;i<od.size()/2;i++){            
                ans+=od[i];
        }
        cout<<ans<<endl;
    }
    else{
        for(int i=0;i<=od.size()/2;i++){
            ans+=od[i];
        }
        cout<<ans<<endl;
    }
    }
    }
}
