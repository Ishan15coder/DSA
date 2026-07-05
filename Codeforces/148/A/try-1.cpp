/*
 * Problem : Insomnia cure
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/5/2025, 12:04:31 PM
 * Link: https://codeforces.com/contest/148/problem/A
 */

#include <iostream>
using namespace std;
int main() {
  
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    if(n==1||l==1||m==1||k==1){
        cout<<d<<endl;
    }
    else{
    int cnt=0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            cnt++;
        }
    }
    cout<<cnt;
}
    return 0;
}
