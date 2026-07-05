/*
 * Problem : Team
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/6/2025, 11:29:03 AM
 * Link: https://codeforces.com/contest/231/problem/A
 */

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
