/*
 * Problem : Lasers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/13/2025, 8:19:08 PM
 * Link: https://codeforces.com/contest/2148/problem/B
 */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int>a(n);
        vector<int>b(m);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=y)cnt++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]<=x)cnt++;
        }
        cout<<cnt<<endl;
    }



    return 0;
}
