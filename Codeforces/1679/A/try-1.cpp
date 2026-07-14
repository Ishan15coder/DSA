/*
 * Problem : AvtoBus
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++17 (GCC 7-32)
 * Date: 9/6/2025, 4:35:22 PM
 * Link: https://codeforces.com/contest/1679/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a=-1,b=-1;
        if(n<4||n%2!=0)cout<<-1<<endl;
        else{
            a=ceil(n*1.0/6);
            b=n/4;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}
