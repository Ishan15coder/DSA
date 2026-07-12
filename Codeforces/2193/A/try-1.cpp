/*
 * Problem : DBMB and the Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/27/2026, 12:13:07 PM
 * Link: https://codeforces.com/contest/2193/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        int j=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            j+=a[i];
        }
        if(j>s)cout<<"NO"<<endl;
        else if((s-j)%x!=0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }

}
