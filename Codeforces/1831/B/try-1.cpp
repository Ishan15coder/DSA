/*
 * Problem : Array merging
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/2/2026, 10:08:45 PM
 * Link: https://codeforces.com/contest/1831/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n); 
        vector<int>b(n); 
        unordered_map<int,int>h;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            h[a[i]]=1;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            m[b[i]]=1;
        }
        int l=0,r=1;
        while(r<n){
            if(a[r-1]==a[r]){
                h[a[r]]=max(h[a[r]],r-l+1);
            }
            else{
                l=r;
            }
            r++;
        }
         l=0,r=1;
        while(r<n){
            if(b[r-1]==b[r]){
                m[b[r]]=max(m[b[r]],r-l+1);
            }
            else{
                l=r;
            }
            r++;
        }
        int ans=1;
        for(int i=0;i<n;i++){
            ans=max(ans,h[a[i]]+m[a[i]]);
        }
        for(int i=0;i<n;i++){
            ans=max(ans,h[b[i]]+m[b[i]]);
        }
        cout<<ans<<endl;
    }



    return 0;
}
