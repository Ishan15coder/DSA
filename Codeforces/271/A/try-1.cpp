/*
 * Problem : Beautiful Year
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 5/29/2025, 2:12:31 PM
 * Link: https://codeforces.com/contest/271/problem/A
 */

#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>d;
    while(1){
        n++;
        int j=n;
        while(j>0){
            d.insert(j%10);
            j=j/10;
        }
        if(d.size()==4) break;
        d.clear();
    }
    cout<<n;
    return 0;
}
