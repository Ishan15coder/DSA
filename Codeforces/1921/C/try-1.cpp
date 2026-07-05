/*
 * Problem : Sending Messages
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/8/2026, 11:53:51 PM
 * Link: https://codeforces.com/contest/1921/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
    cin>>t;
    while(t--){
    long long n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<int>o(n);
        for(int i=0;i<n;i++){
            cin>>o[i];
        }
    long long ch=0;
        f -= min((long long)o[0]*a, b);
for(int i=1;i<n;i++){
    f -= min((long long)(o[i]-o[i-1])*a, b);
}

        if (f > 0) cout<<"YES"<<endl; 
        else cout<<"NO"<<endl;

        }

    return 0;
}
