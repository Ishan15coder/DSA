/*
 * Problem : How Much Does Daytona Cost?
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 7/6/2025, 10:40:41 PM
 * Link: https://codeforces.com/contest/1878/problem/A
 */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int ch=0;
        for(int i=0;i<n;i++){
            if(p[i]==k)ch=1;
        }
        if(ch)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        t--;
    }


    return 0;
}
