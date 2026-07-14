/*
 * Problem : Alternating Series
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/10/2025, 9:21:47 PM
 * Link: https://codeforces.com/contest/2131/problem/B
 */

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) cout << -1 << " ";
            else if(n%2==0&&i==n)cout<<2<<" ";
            else cout<<3<<" ";
        }
        cout<<endl;
    }




    return 0;
}
