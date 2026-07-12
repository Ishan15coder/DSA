/*
 * Problem : Polycarp Recovers the Permutation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/9/2026, 8:51:02 PM
 * Link: https://codeforces.com/contest/1611/problem/C
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
        if(a[0]!=n&&a[n-1]!=n){
            cout<<-1<<endl;
        }
        else{

        vector<int>b;
        for(int i=0;i<n;i++){
            if(a[i]!=n){
            b.push_back(a[i]);
            }
        }
        reverse(b.begin(),b.end());
        b.push_back(n);
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;

    }
    }

    return 0;
}
