/*
 * Problem : Numbers Box
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/13/2026, 10:14:09 AM
 * Link: https://codeforces.com/contest/1447/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int ans=0;
        cin>>n>>m;
        vector<int>a(n*m);
        for(int i=0;i<n*m;i++){
            cin>>a[i];
        }
        int ne=0,ze=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<0)ne++;
            else if(a[i]==0)ze++;
        }
        if(ne%2==0||(ne%2==1&&ze>0)){
            for(int i=0;i<n*m;i++){
                ans+=abs(a[i]);
            }
            cout<<ans<<endl;
        }
        else{
            for(int i=0;i<n*m;i++){
                a[i]=abs(a[i]);
            }
            sort(a.begin(),a.end());
            reverse(a.begin(),a.end());
            for(int i=0;i<n*m-1;i++){
                ans+=(a[i]);
            }
            ans-=a[n*m-1];
            cout<<ans<<endl;
        }
    }



    return 0;
}
