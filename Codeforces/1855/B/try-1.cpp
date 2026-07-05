/*
 * Problem : Longest Divisors Interval
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/20/2025, 11:38:56 PM
 * Link: https://codeforces.com/contest/1855/problem/B
 */

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        int i=1;
        while(n%i==0){
            i++;
        }
        
        
        cout<<i-1<<endl;
    }
    return 0;
}
