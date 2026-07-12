/*
 * Problem : Olya and Game with Arrays
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/3/2026, 9:32:40 AM
 * Link: https://codeforces.com/contest/1859/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>s;
        vector<long long>ss;
        while(n--){
            long long k;
            cin>>k;
            vector<long long>a(k);
            for(long long i=0;i<k;i++){
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            s.push_back(a[0]);
            ss.push_back(a[1]);
        }
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        long long ans=s[0];
        for(long long i=1;i<ss.size();i++){
            ans+=ss[i];
        }
        cout<<ans<<endl;



    }



    return 0;
}
