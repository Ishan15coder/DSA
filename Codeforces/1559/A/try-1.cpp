/*
 * Problem : Mocha and Math
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 12/27/2025, 10:46:56 PM
 * Link: https://codeforces.com/contest/1559/problem/A
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
        int k=a[0];
        for(int i=1;i<n;i++){
            k=k&a[i];
        }
cout<<k<<endl;



    }




    return 0;
}
