/*
 * Problem : Reverse a Permutation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/27/2026, 7:09:11 PM
 * Link: https://codeforces.com/contest/2193/problem/B
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=0;
        for(;l<n;l++){
            if(a[l]!=n-l)break;
        }
        int r=0;
        for(;r<n;r++){
            if(a[r]==n-l)break;
        }
        reverse(a.begin()+l,a.begin()+r+1);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
