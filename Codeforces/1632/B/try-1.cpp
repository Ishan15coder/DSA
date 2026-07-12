/*
 * Problem : Roof Construction
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/16/2026, 10:08:50 PM
 * Link: https://codeforces.com/contest/1632/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        n--;
        vector<long long>ans;
        long long msb=log2(n);
        long long num=pow(2,msb)-1;
        for(long long i=num;i>=0;i--){
            ans.push_back(i);
        }
        for(long long i=num+1;i<=n;i++){
            ans.push_back(i);
        }
        for(long long i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }        
        cout<<endl;
}



    return 0;
}
