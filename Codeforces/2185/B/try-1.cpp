/*
 * Problem : Prefix Max
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/18/2026, 8:27:55 PM
 * Link: https://codeforces.com/contest/2185/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,k;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b=a;
        sort(b.begin(),b.end());
        int id=-1;
        reverse(b.begin(),b.end());
        int ch=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                l=a[i];
                k=b[i];
                id=i;
                ch=1;
                break;
            }
        }
        if(ch){
        for(int i=id+1;i<n;i++){
            if(a[i]==k){
                swap(a[i],a[id]);
                break;
            }
        }
    }
        int ma=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++){
            ma=max(a[i],ma);
            ans+=ma;
        }
        cout<<ans<<endl;
    }


    return 0;
}
