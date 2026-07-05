/*
 * Problem : Distinct Split
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/20/2026, 10:31:58 AM
 * Link: https://codeforces.com/contest/1791/problem/D
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,long long>un;
        unordered_map<char,long long>uc;
        vector<long long>a;
        vector<long long>b;
        long long ans=0;
        for(long long i=0;i<n;i++){
            un[s[i]]++;
            a.push_back(un.size());
        }
        for(long long i=n-1;i>0;i--){
            uc[s[i]]++;
            b.push_back(uc.size());
        }
        for(long long i = 0; i <= n-2; i++){
    ans = max(ans, a[i] + b[n-2-i]);
}

        cout<<ans<<endl;
    }




    return 0;
}
