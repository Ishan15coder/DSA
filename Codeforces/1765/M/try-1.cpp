/*
 * Problem : Minimum LCM
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/20/2026, 9:40:40 PM
 * Link: https://codeforces.com/contest/1765/problem/M
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a=1;
        long long b=n-a;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i;
                b=n-a;
                break;
            }
        }
        cout<<a<<" "<<n-a<<endl;
    }



    return 0;
}
