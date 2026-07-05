/*
 * Problem : Jellyfish and Undertale
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/13/2025, 7:27:47 PM
 * Link: https://codeforces.com/contest/1875/problem/A
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
       
        
        long long ans=b;
        for(int i=0;i<n;i++){
            ans+=min(p[i],a-1);
        }
        cout<<ans<<endl;
    }

    return 0;
}
